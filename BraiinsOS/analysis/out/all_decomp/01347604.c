// FUN_01347604 @ 01347604 size=636 calls_out=7 calls_in=2
// strings: 

void FUN_01347604(uint *param_1,undefined4 *param_2,undefined4 param_3,byte *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,uint param_10,undefined4 param_11)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r3;
  int *piVar4;
  undefined8 uVar5;
  int *local_dc;
  uint local_d8;
  int *local_d4;
  uint local_d0;
  uint uStack_cc;
  uint local_c8;
  uint uStack_c4;
  uint local_c0;
  uint uStack_bc;
  uint local_b8;
  byte *local_b4;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined4 local_88;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint local_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  iVar3 = FUN_013563e4(param_11,param_4);
  if (iVar3 != 0) {
    *param_1 = 0x8000000a;
    return;
  }
  uVar5 = FUN_013528d4(param_10,param_4);
  if ((int)uVar5 == 0) {
    piVar4 = (int *)*param_2;
    do {
      iVar3 = *piVar4;
      bVar2 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar2);
    *piVar4 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x134787c);
      (*pcVar1)();
    }
  }
  else {
    FUN_01344bb8(&local_d8,*param_2,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_7);
    piVar4 = local_d4;
    if (local_d8 != 0x8000000a) {
      param_1[2] = local_d0;
      param_1[3] = uStack_cc;
      param_1[4] = local_c8;
      param_1[5] = uStack_c4;
      param_1[6] = local_c0;
      param_1[7] = uStack_bc;
      param_1[8] = local_b8;
      param_1[9] = (uint)local_b4;
      param_1[10] = local_b0;
      param_1[0xb] = uStack_ac;
      param_1[0xc] = uStack_a8;
      param_1[0xd] = uStack_a4;
      *param_1 = local_d8;
      param_1[1] = (uint)local_d4;
      return;
    }
  }
  local_dc = piVar4;
  FUN_01344eb4(&local_d8,&local_dc,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  if (local_d8 == 0x8000000a) {
    local_d0 = (uint)*param_4;
    if (local_d0 == 5) {
      local_d0 = *(uint *)(param_4 + 4);
      uStack_cc = *(uint *)(param_4 + 8);
      local_b8 = *(uint *)(param_4 + 0xc);
      if (local_d0 == 0) {
        local_b8 = 0;
      }
      param_4 = (&PTR_FUN_018b2c4c)[param_10 & 0xff];
      local_d8 = (uint)(local_d0 != 0);
    }
    else {
      local_d8 = 3;
      uStack_cc = extraout_r1;
      local_b8 = extraout_r3;
    }
    local_88 = 5;
    local_b0 = 5;
    local_d4 = (int *)0x0;
    uStack_c4 = 0;
    local_c8 = local_d8;
    local_c0 = local_d0;
    uStack_bc = uStack_cc;
    local_b4 = param_4;
    do {
      iVar3 = FUN_013514a4(&local_d8);
      if (iVar3 == 0) {
        *param_1 = 0x8000000a;
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + -1;
        goto LAB_01347860;
      }
      FUN_01347604(&local_60,&local_dc,param_3,iVar3,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
    } while (local_60 == 0x8000000a);
    *param_1 = local_60;
    param_1[1] = uStack_5c;
    param_1[2] = uStack_58;
    param_1[3] = uStack_54;
    param_1[4] = local_50;
    param_1[5] = uStack_4c;
    param_1[6] = uStack_48;
    param_1[7] = uStack_44;
    param_1[8] = uStack_40;
    param_1[9] = local_3c;
    param_1[10] = uStack_38;
    param_1[0xb] = uStack_34;
    param_1[0xc] = uStack_30;
    param_1[0xd] = uStack_2c;
  }
  else {
    *param_1 = local_d8;
    param_1[1] = (uint)local_d4;
    param_1[2] = local_d0;
    param_1[3] = uStack_cc;
    param_1[4] = local_c8;
    param_1[5] = uStack_c4;
    param_1[6] = local_c0;
    param_1[7] = uStack_bc;
    param_1[8] = local_b8;
    param_1[9] = (uint)local_b4;
    param_1[10] = local_b0;
    param_1[0xb] = uStack_ac;
    param_1[0xc] = uStack_a8;
    param_1[0xd] = uStack_a4;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + -1;
LAB_01347860:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013532e4(piVar4);
    return;
  }
  return;
}

