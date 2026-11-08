// FUN_0139c82c @ 0139c82c size=516 calls_out=8 calls_in=0
// strings: 

uint FUN_0139c82c(int *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte **local_3c;
  byte *local_38;
  byte **local_30;
  code *local_2c;
  undefined4 local_28;
  byte *local_24;
  
  if (param_1[0x254] == 2) {
    if (*param_1 == 2 && param_1[1] == 0) {
      uVar4 = FUN_0139e540(param_1,param_2,param_3);
      return uVar4;
    }
    if (*(int *)(param_2 + 0x248) == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01893558);
    }
    uVar4 = 0;
    if (*(char *)(param_1[0x9e] + 0x15a) == '\x01') {
      uVar4 = (uint)*(byte *)(param_1[0x9e] + 0x15b);
    }
    FUN_0137a9fc(&local_30,param_1,param_2 + 0xd8,param_3);
    if (local_30 == (byte **)0x2) {
      bVar2 = (byte)*local_2c;
      local_24 = (byte *)local_2c;
    }
    else {
      if ((((uint)local_30 & uVar4 & 1) == 0) ||
         (FUN_013b7ec0(&local_3c,param_3,local_2c,local_28,local_28,param_1,param_2 + 0xd8),
         local_30 = local_3c, local_3c != (byte **)0x2)) {
LAB_0139c9b4:
        return (uint)(local_30 == (byte **)0x1);
      }
      bVar2 = *local_38;
      local_24 = local_38;
    }
    if (1 < bVar2) {
      local_30 = &local_24;
      local_2c = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_30,&DAT_01892790);
    }
  }
  else {
    iVar3 = param_1[0x1f1];
    cVar1 = *(char *)((int)param_1 + 0x7c5);
    FUN_013ae3dc(&local_30,param_1 + 0x144,param_3);
    if (local_30 == (byte **)0x2) {
      bVar2 = (byte)*local_2c;
      local_24 = (byte *)local_2c;
    }
    else {
      if (((((uint)local_30 & 1) == 0) || ((char)iVar3 == '\0' || cVar1 == '\0')) ||
         (FUN_013b7b18(&local_3c,param_3,local_2c,local_28,local_28,param_1 + 0x144),
         local_30 = local_3c, local_3c != (byte **)0x2)) goto LAB_0139c9b4;
      bVar2 = *local_38;
      local_24 = local_38;
    }
    if (1 < bVar2) {
      local_30 = &local_24;
      local_2c = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_30,&DAT_01892790);
    }
  }
  thunk_FUN_016d3fb4(local_24);
  uVar4 = FUN_0139e540(param_1,param_2,param_3);
  return uVar4;
}

