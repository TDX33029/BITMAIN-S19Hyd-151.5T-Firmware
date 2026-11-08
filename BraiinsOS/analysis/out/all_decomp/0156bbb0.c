// FUN_0156bbb0 @ 0156bbb0 size=116 calls_out=2 calls_in=0
// strings: 

bool FUN_0156bbb0(void)

{
  int iVar1;
  undefined1 local_d;
  undefined1 *local_c;
  
  DataMemoryBarrier(0xb);
  if (DAT_018cc634 != 0) {
    local_d = 1;
    local_c = &local_d;
    FUN_015eedc4(&DAT_018cc634,0,&local_c,&DAT_01857778,&DAT_0185778c);
  }
  iVar1 = FUN_01753ba4();
  return iVar1 == 1;
}

