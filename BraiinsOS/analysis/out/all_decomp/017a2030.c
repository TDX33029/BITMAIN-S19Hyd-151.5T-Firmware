// FUN_017a2030 @ 017a2030 size=328 calls_out=3 calls_in=1
// strings: 

int FUN_017a2030(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  if ((param_2 & 0xfffffffd) == 1) {
    *(undefined4 *)(param_1 + 0x974) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    if (param_2 - 2 < 2) {
LAB_017a20a0:
      if (*(int *)(param_1 + 0x990) != 0) {
        if (*(code **)(param_1 + 0x2cc) == (code *)0x0) {
          thunk_FUN_016d3fb4(*(int *)(param_1 + 0x990));
        }
        else {
          (**(code **)(param_1 + 0x2cc))(*(undefined4 *)(param_1 + 0x2d0));
        }
      }
      FUN_017a0cdc(*(undefined4 *)(param_1 + 0x9a0));
      iVar1 = param_1 + 0xc;
      bVar2 = iVar1 == 0;
      *(undefined4 *)(param_1 + 0x990) = 0;
      *(undefined4 *)(param_1 + 0x994) = 0;
      if (bVar2) {
        iVar1 = -1;
      }
      *(undefined4 *)(param_1 + 0x998) = 0;
      *(undefined4 *)(param_1 + 0x99c) = 0;
      *(undefined4 *)(param_1 + 0x9a0) = 0;
      *(undefined4 *)(param_1 + 0x9a8) = 0;
      *(undefined4 *)(param_1 + 0x9ac) = 0;
      *(undefined4 *)(param_1 + 0x9b0) = 0;
      *(undefined4 *)(param_1 + 0x9a4) = 0;
      if (!bVar2) {
        FUN_016dd606(iVar1,0,0xb0);
        iVar1 = 0;
        *(undefined4 *)(param_1 + 0x38) = 3;
        *(undefined4 *)(param_1 + 0x2c) = 1;
      }
      return iVar1;
    }
  }
  else if (param_2 - 2 < 2) {
    if (*(int *)(param_1 + 0x974) != 0) {
      return -0x3c;
    }
    goto LAB_017a20a0;
  }
  return 0;
}

