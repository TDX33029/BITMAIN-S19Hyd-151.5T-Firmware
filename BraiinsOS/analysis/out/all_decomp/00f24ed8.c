// FUN_00f24ed8 @ 00f24ed8 size=184 calls_out=1 calls_in=10
// strings: 

void FUN_00f24ed8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x18);
  do {
    if (param_2 == 0) {
      return;
    }
    if (puVar2[-4] == -0x80000000 || puVar2[-4] == 0) {
      if (puVar2[-1] == -0x80000000 || puVar2[-1] == 0) goto LAB_00f24f1c;
LAB_00f24f5c:
      thunk_FUN_016d3fb4(*puVar2);
      if (puVar2[2] != -0x80000000 && puVar2[2] != 0) goto LAB_00f24f74;
LAB_00f24f2c:
      uVar1 = puVar2[5];
    }
    else {
      thunk_FUN_016d3fb4(puVar2[-3]);
      if (puVar2[-1] != -0x80000000 && puVar2[-1] != 0) goto LAB_00f24f5c;
LAB_00f24f1c:
      if (puVar2[2] == -0x80000000 || puVar2[2] == 0) goto LAB_00f24f2c;
LAB_00f24f74:
      thunk_FUN_016d3fb4(puVar2[3]);
      uVar1 = puVar2[5];
    }
    if ((uVar1 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(puVar2[6]);
    }
    param_2 = param_2 + -1;
    puVar2 = puVar2 + 0x12;
  } while( true );
}

