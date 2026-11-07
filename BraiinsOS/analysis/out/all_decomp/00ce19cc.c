// FUN_00ce19cc @ 00ce19cc size=164 calls_out=1 calls_in=9
// strings: 

void FUN_00ce19cc(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x30);
  do {
    if (param_2 == 0) {
      return;
    }
    if ((puVar2[-10] & 0x7fffffff) == 0) {
      if ((puVar2[-7] & 0x7fffffff) == 0) goto LAB_00ce1a08;
LAB_00ce1a38:
      thunk_FUN_016d3fb4(puVar2[-6]);
      if ((puVar2[-4] & 0x7fffffff) != 0) goto LAB_00ce1a4c;
LAB_00ce1a14:
      uVar1 = puVar2[-1];
    }
    else {
      thunk_FUN_016d3fb4(puVar2[-9]);
      if ((puVar2[-7] & 0x7fffffff) != 0) goto LAB_00ce1a38;
LAB_00ce1a08:
      if ((puVar2[-4] & 0x7fffffff) == 0) goto LAB_00ce1a14;
LAB_00ce1a4c:
      thunk_FUN_016d3fb4(puVar2[-3]);
      uVar1 = puVar2[-1];
    }
    if ((uVar1 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*puVar2);
    }
    param_2 = param_2 + -1;
    puVar2 = puVar2 + 0x12;
  } while( true );
}

