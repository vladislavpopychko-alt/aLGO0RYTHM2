# Структуры данных. Работа в VS Code со структурами данных «бинарная_биноминальная куча/куча Фибоначчи/хеш-таблицы»
Целью данной работы является повторение теоретического материала по структурам данных "бинарная куча/биномиальная куча/куча Фибоначчи/хеш-таблицы", разработка собственных представлений этих структур данных на языках программирования Python, C++, Java и проведение анализа предложенных представлений.
## 1. Обзор структур данных

-  Бинарная куча: (Определение, свойства, операции, примеры реализации, временная сложность)
-  Биномиальная куча: (Определение, свойства, операции, примеры реализации, временная сложность)
-  Куча Фибоначчи: (Определение, свойства, операции, примеры реализации, временная сложность, особенности амортизированной оценки времени)
-  Кеш-таблица: (Определение, принципы работы, хеш-функции, методы разрешения коллизий, примеры реализации, временная сложность)
## 2. Представление структур данных на Python

### Бинарная куча:
### Python 
''' py   
import heapq

    class BinaryHeap:
        def __init__(self):
            self.heap = []

        def insert(self, key):
            heapq.heappush(self.heap, key)

        def extract_min(self):
            if self.heap:
                return heapq.heappop(self.heap)
            else:
                return None
'''
(Описание реализации, обоснование выбора структур данных Python, временная сложность операций)
- Биномиальная куча: (Описание реализации с использованием связных списков или других структур данных Python)
- Куча Фибоначчи: (Описание реализации, возможно с использованием словарей для быстрого доступа к узлам)
### Хеш-таблица:
''' py

    class HashTable:
        def __init__(self, size=10):
            self.size = size
            self.table = [None] * size

        def __setitem__(self, key, value):
            index = hash(key) % self.size
            if self.table[index] is None:
                self.table[index] = [(key, value)]
            else:
                self.table[index].append((key, value))

        def __getitem__(self, key):
            index = hash(key) % self.size
            if self.table[index] is not None:
                for k, v in self.table[index]:
                    if k == key:
                        return v
            return None
'''
(Описание реализации с использованием списков или словарей для разрешения коллизий, анализ хеш-функций)
## 3. Представление структур данных на C++

### Бинарная куча:
''' c++
#include <vector>
    #include <algorithm>

    class BinaryHeap {
    private:
        std::vector<int> heap;
    public:
        void insert(int key) {
            heap.push_back(key);
            std::push_heap(heap.begin(), heap.end(), std::greater<int>());
        }

        int extract_min() {
            if (!heap.empty()) {
                std::pop_heap(heap.begin(), heap.end(), std::greater<int>());
                int min_val = heap.back();
                heap.pop_back();
                return min_val;
            } else {
                return -1; // Или другое значение по умолчанию
            }
        }
    };
'''
*(Описание реализации с использованием std::vector и алгоритмов из <algorithm>, временная сложность операций)*
- Биномиальная куча: *(Описание реализации с использованием классов и указателей)*
- Куча Фибоначчи: *(Описание реализации, требующее более сложной организации памяти)*
### Хеш-таблица:
''' c++
    #include <iostream>
    #include <string>
    #include <vector>

    class HashTable {
    private:
        std::vector<std::vector<std::pair<std::string, int>>> table;
        int size;

    public:
        HashTable(int size) : size(size), table(size) {}

        void insert(const std::string& key, int value) {
            int index = hash(key) % size;
            table[index].push_back(std::make_pair(key, value));
        }

        int get(const std::string& key) {
            int index = hash(key) % size;
            for (const auto& pair : table[index]) {
                if (pair.first == key) {
                    return pair.second;
                }
            }
            return -1; // Или другое значение по умолчанию
        }

    private:
        unsigned int hash(const std::string& key) {
            unsigned int hashValue = 0;
            for (char c : key) {
                hashValue = hashValue * 31 + c;
            }
            return hashValue;
        }
    };
'''
## 4. Представление структур данных на Java

### Бинарная куча:



