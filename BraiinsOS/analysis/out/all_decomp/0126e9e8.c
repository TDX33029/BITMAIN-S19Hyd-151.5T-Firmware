// FUN_0126e9e8 @ 0126e9e8 size=232 calls_out=4 calls_in=0
// strings: 

undefined4 FUN_0126e9e8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0188b4f8);
  }
  param_1[2] = param_1[0x19];
  param_1[3] = param_1[0x1a];
  param_1[4] = param_1[0x1b];
  param_1[1] = param_1[0x18];
  FUN_016dd1aa((int)param_1 + 0x15,param_1 + 0x10,0x20);
  *(char *)(param_1 + 5) = (char)param_1[0x1c];
  iVar2 = FUN_016ddc2c(param_1 + 1,param_2);
  if (*param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_0188b4e8);
  }
  param_1[0x18] = param_1[1] & 0x7dff;
  param_1[0x19] = (uint)*(ushort *)(param_1 + 2);
  param_1[0x1a] = param_1[3] & 0xd00f1fff;
  param_1[0x1b] = param_1[4] & 0x1dffb;
  iVar1 = param_1[5];
  FUN_016dd1aa(param_1 + 0x10,(int)param_1 + 0x15,0x20);
  *(char *)(param_1 + 0x1c) = (char)iVar1;
  if (iVar2 == -1) {
    uVar3 = FUN_0126ead8();
    return uVar3;
  }
  return 0x86;
}

