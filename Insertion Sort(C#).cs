
using System;

namespace InsertionSort
{
    class Program
    {
        static void InserttionSort(int[] arr)
        {
            for(int i = 1; i < arr.Length; i++)
            {
                int key = arr[i];
                int j = i - 1;
                while (arr[j]>key &&j >= 0)
                {
                    arr[j + 1] = arr[j];
                    j--;
                }
                arr[j + 1] = key;
            }
        }

        static void Main(string[] args)
        {
            int[] a = { 2, 5, 8, 4, 9 };
            InserttionSort(a);

            for (int i = 0; i < a.Length; i++)
                Console.WriteLine(a[i]+" ");
        }
        }

    }

