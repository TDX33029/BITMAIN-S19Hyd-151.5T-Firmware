// FUN_009539c8 @ 009539c8 size=164 calls_out=1 calls_in=9
// strings: 

void FUN_009539c8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x30);
  do {
    if (param_2 == 0) {
      return;
    }
    if ((puVar2[-10] & 0x7fffffff) == 0) {
      if ((puVar2[-7] & 0x7fffffff) == 0) goto LAB_00953a04;
LAB_00953a34:
      thunk_FUN_016d3fb4(puVar2[-6]);
      if ((puVar2[-4] & 0x7fffffff) != 0) goto LAB_00953a48;
LAB_00953a10:
      uVar1 = puVar2[-1];
    }
    else {
      thunk_FUN_016d3fb4(puVar2[-9]);
      if ((puVar2[-7] & 0x7fffffff) != 0) goto LAB_00953a34;
LAB_00953a04:
      if ((puVar2[-4] & 0x7fffffff) == 0) goto LAB_00953a10;
LAB_00953a48:
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

