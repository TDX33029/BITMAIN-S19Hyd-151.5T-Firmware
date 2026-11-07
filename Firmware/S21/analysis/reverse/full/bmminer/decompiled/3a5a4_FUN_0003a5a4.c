// FUN_0003a5a4 @ 0003a5a4  size=400  callers=1
// program: bmminer


undefined4 * FUN_0003a5a4(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int extraout_r1;
  undefined4 local_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  
  FUN_0003a53c(&local_40);
  if (local_38 == 0) {
    iVar3 = param_3[6];
    *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) & 0xfe;
    if (iVar3 < param_3[5]) {
      do {
        cVar2 = *(char *)(extraout_r1 + 0x14);
        bVar1 = *(byte *)(*param_3 + iVar3);
        iVar3 = *(int *)(&DAT_0009f26c +
                        ((short)cVar2 * 0xc + *(int *)(&DAT_0009f6ec + (uint)bVar1 * 4)) * 4);
        if (*(short *)(extraout_r1 + 0x14) == 0x90e && iVar3 == 0xf) {
          iVar3 = 0x10;
        }
        *(char *)(extraout_r1 + 0x14) = (char)iVar3;
        FUN_00039f38(&local_34,extraout_r1,param_3,(uint)bVar1,(int)cVar2,(int)(char)iVar3);
        if ((*(byte *)(param_3 + 0xb) & 1) == 0) {
          *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) | 1;
          iVar3 = 0;
          if (param_3[10] != 0) {
            iVar3 = param_3[9] + 1;
          }
          param_3[6] = param_3[6] + 1;
          param_3[9] = iVar3;
        }
        if (local_2c != 0) {
          *param_1 = local_34;
          param_1[1] = uStack_30;
          param_1[2] = local_2c;
          return param_1;
        }
        iVar3 = param_3[6];
        *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) & 0xfe;
      } while (iVar3 < param_3[5]);
    }
    if (*(char *)(extraout_r1 + 0x14) == '\x11') {
      FUN_00039eb8(param_3);
    }
    FUN_0003a53c(&local_40,extraout_r1);
    if (0x2000 < param_3[9] && 1 < param_3[10] - 6U) {
      local_38 = 0xb;
    }
  }
  *param_1 = local_40;
  param_1[1] = uStack_3c;
  param_1[2] = local_38;
  return param_1;
}

