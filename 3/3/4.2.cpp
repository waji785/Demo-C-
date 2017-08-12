//simple and poor strncpy
void
copy_n(char dst[], char src[], int n) 
{
	int dst_index,
		src_index;
	src_index = 0;
	for (dst_index = 0; dst_index < n; dst_index++) {
		dst[dst_index] = src[src_index];
		if (src[src_index] != 0)
			src_index++;
	}
}
//no bounds here