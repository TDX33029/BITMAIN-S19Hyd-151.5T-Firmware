// FUN_0166956c @ 0166956c size=440 calls_out=7 calls_in=3
// strings: 

void FUN_0166956c(int *param_1,int *param_2,char *param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int *local_7c;
  int *local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  if ((param_4 == 0) || (*param_3 != '#')) {
    local_48 = param_2[3];
    local_44 = param_2[4];
    local_40 = param_2[5];
    iStack_3c = param_2[6];
    iStack_38 = param_2[7];
    local_34 = param_2[8];
    iStack_30 = param_2[9];
    iStack_2c = param_2[10];
    iStack_28 = param_2[0xb];
    FUN_0166e138(&local_80,param_5,&local_48,param_3,param_4);
    if (local_80 == -0x7ffffff6) {
      FUN_006666fc(&local_a8,local_7c[3],local_7c[4]);
      local_78 = &local_9c;
      local_9c = local_7c[5];
      iStack_98 = local_7c[6];
      iStack_94 = local_7c[7];
      local_90 = local_7c[8];
      iStack_8c = local_7c[9];
      iStack_88 = local_7c[10];
      iStack_84 = local_7c[0xb];
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *local_7c;
        bVar2 = (bool)hasExclusiveAccess(local_7c);
      } while (!bVar2);
      *local_7c = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01670d04(local_7c);
      }
      local_80 = local_a4;
      local_7c = (int *)local_a0;
      uVar5 = FUN_013438ec(&local_80);
      if (((int)uVar5 != 0) && ((int)((ulonglong)uVar5 >> 0x20) == 0)) {
        FUN_01343738(&local_a8);
      }
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0x30);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x30);
      }
      *puVar4 = 1;
      puVar4[1] = 1;
      puVar4[2] = local_a8;
      puVar4[3] = local_a4;
      puVar4[4] = local_a0;
      puVar4[5] = local_9c;
      puVar4[6] = iStack_98;
      puVar4[7] = iStack_94;
      puVar4[8] = local_90;
      puVar4[9] = iStack_8c;
      puVar4[10] = iStack_88;
      puVar4[0xb] = iStack_84;
      *param_1 = -0x7ffffff6;
      param_1[1] = (int)puVar4;
    }
    else {
      param_1[2] = (int)local_78;
      param_1[3] = iStack_74;
      param_1[4] = iStack_70;
      param_1[5] = iStack_6c;
      param_1[6] = iStack_68;
      param_1[7] = iStack_64;
      param_1[8] = local_60;
      param_1[9] = iStack_5c;
      param_1[10] = iStack_58;
      param_1[0xb] = iStack_54;
      param_1[0xc] = iStack_50;
      param_1[0xd] = iStack_4c;
      *param_1 = local_80;
      param_1[1] = (int)local_7c;
    }
  }
  else {
    do {
      iVar3 = *param_2;
      bVar2 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar2);
    *param_2 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1669720);
      (*pcVar1)();
    }
    *param_1 = -0x7ffffff6;
    param_1[1] = (int)param_2;
  }
  return;
}

