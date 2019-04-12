/*******************************************
 * 
 * Insertion sort.
 * 
 *******************************************/

import java.util.Comparator;

/**
 * Insertion class.
 * 
 * @author jfq3301
 * @date 2019.4.11
 */
public class Insertion {
    
    // This class should not be instantiated.
    private Insertion() {}

    /**
     * Insert sort.
     */
    public static void sort(Comparable[] a) {
        int len = a.length;
        for (int i = 1; i < len; i++) {
            for (int j = i; (j > 0) && less(a[j], a[j-1]); j--) {
                exch(a, j, j-1);
            }
        }
    }


    /*********************************************/
    // v < w
    private static boolean less(Comparable v, Comparable w) {
        return v.compareTo(w) < 0;
    }

    // v < w?
    private static boolean less(Comparator comparator, Object v, Object w) {
        return comparator.compare(v, w) < 0;
    }

    // exchange two object.
    private static void exch(Object[] a, int i, int j) {
        Object swap = a[i];
        a[i] = a[j];
        a[j] = swap;
    }

    /*********************************************/
    /*Check if array is sorted - useful for debugging.*/
    /*********************************************/

    // is sorted.
    private static boolean isSorted(Comparable[] a) {
        return isSorted(a, 0, a.length);
    }

    // is a[lo, hi) sorted.
    private static boolean isSorted(Comparable[] a, int lo, int hi) {
        boolean ret = true;
        for (int i = lo+1; i < hi; i++) {
            if (less(a[i], a[i-1])) {
                ret = false;
                break;
            }
        }
        return ret;
    }
    
    // print out
    private static void show(Comparable[] a) {
        for (int i = 0; i < a.length; i++) {
            System.out.print(a[i] + ", ");
        }
        System.out.println("");
    }

    /**
     * main
     */

    public static void main(String[] args) {
        String[] a = StdIn.readAllStrings();
        Insertion.sort(a);
        show(a);
    }

}
