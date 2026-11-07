// FUN_0069bf2c @ 0069bf2c size=680 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_0069bf2c(undefined4 *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_ec;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined1 local_88 [12];
  undefined4 local_7c;
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  
  piVar3 = (int *)*param_1;
  do {
    if (*piVar3 != 1) {
      bVar2 = false;
      ClearExclusiveLocal();
      goto LAB_0069bf6c;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 0;
  DataMemoryBarrier(0xb);
  bVar2 = true;
LAB_0069bf6c:
  piVar3 = (int *)*param_1;
  if (bVar2) {
    if (piVar3[1] == 1) {
      DataMemoryBarrier(0xb);
      *piVar3 = 1;
      piVar4 = piVar3;
    }
    else {
      piVar6 = piVar3 + 1;
      piVar4 = (int *)FUN_0068c8b0();
      FUN_01bed4e2(piVar4 + 2,piVar3 + 2,0x74);
      *param_1 = piVar4;
      if (piVar3 != (int *)&DAT_ffffffff) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          thunk_FUN_01be4678(piVar3);
        }
      }
    }
  }
  else {
    piVar4 = (int *)FUN_0068c8b0();
    iVar5 = piVar3[0x1e];
    uVar1 = *(undefined1 *)((int)piVar3 + 0x79);
    FUN_006a0110(&local_98,piVar3[3],piVar3[4]);
    local_8c = CONCAT31(local_8c._1_3_,(char)piVar3[5]);
    FUN_006a0110(local_88,piVar3[7],piVar3[8]);
    local_7c = CONCAT31(local_7c._1_3_,(char)piVar3[9]);
    FUN_006a0110(local_78,piVar3[0xb],piVar3[0xc]);
    local_6c = CONCAT31(local_6c._1_3_,(char)piVar3[0xd]);
    FUN_006a0110(&local_68,piVar3[0xf],piVar3[0x10]);
    local_5c = CONCAT31(local_5c._1_3_,(char)piVar3[0x11]);
    FUN_006a0110(&local_58,piVar3[0x13],piVar3[0x14]);
    local_4c = CONCAT31(local_4c._1_3_,(char)piVar3[0x15]);
    FUN_006a0110(&local_48,piVar3[0x17],piVar3[0x18]);
    local_3c = CONCAT31(local_3c._1_3_,(char)piVar3[0x19]);
    FUN_006a0110(&local_38,piVar3[0x1b],piVar3[0x1c]);
    local_2c = CONCAT31(local_2c._1_3_,(char)piVar3[0x1d]);
    local_108 = local_98;
    uStack_104 = uStack_94;
    uStack_100 = uStack_90;
    uStack_fc = local_8c;
    uStack_ec = local_7c;
    uStack_dc = local_6c;
    local_d8 = local_68;
    uStack_d4 = uStack_64;
    uStack_d0 = uStack_60;
    uStack_cc = local_5c;
    local_c8 = local_58;
    uStack_c4 = uStack_54;
    uStack_c0 = uStack_50;
    uStack_bc = local_4c;
    local_b8 = local_48;
    uStack_b4 = uStack_44;
    uStack_b0 = uStack_40;
    uStack_ac = local_3c;
    local_a8 = local_38;
    uStack_a4 = uStack_34;
    uStack_a0 = uStack_30;
    uStack_9c = local_2c;
    FUN_01bed4e2(piVar4 + 2,&local_108,0x70);
    *(undefined1 *)((int)piVar4 + 0x79) = uVar1;
    *(char *)(piVar4 + 0x1e) = (char)iVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0068777c(*param_1);
    }
    *param_1 = piVar4;
  }
  return piVar4 + 2;
}

