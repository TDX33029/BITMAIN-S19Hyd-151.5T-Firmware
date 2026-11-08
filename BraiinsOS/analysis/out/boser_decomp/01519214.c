// FUN_01519214 @ 01519214 size=1176 calls_out=6 calls_in=1
// strings: minimum | minimum | minimum | minimum

void FUN_01519214(undefined4 *param_1,int param_2,undefined4 *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  
  pcVar2 = (char *)FUN_0196b3a8(*param_3,param_3[1],&DAT_00569628,0x10);
  if (pcVar2 != (char *)0x0) {
    cVar1 = *pcVar2;
    if (cVar1 == '\x01') {
      pcVar2 = (char *)(uint)(byte)pcVar2[1];
    }
    if (cVar1 == '\x01' && pcVar2 == &DAT_00000001) {
      puVar6 = (uint *)(param_4 + 8);
      if (*param_4 == '\x02') {
        uVar3 = *(undefined4 *)(param_2 + 0x38);
        uVar5 = *(undefined4 *)(param_2 + 0x3c);
        if ((*puVar6 & 3) == 0) {
          uVar8 = *(undefined8 *)(param_4 + 0x10);
          uVar9 = FUN_015345a4(uVar3,uVar5,&DAT_00569628,0x10);
          FUN_01bed4e2((uint)auStack_48 | 7,puVar6,0x10);
          local_70 = CONCAT31(local_70._1_3_,2);
          FUN_01bed4e2((uint)&local_70 | 1,auStack_48,0x17);
          local_50 = uVar8;
          local_58 = uVar9;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(0x28);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x28);
          }
          puVar7 = &DAT_01cfb1f0;
        }
        else if (*puVar6 == 2) {
          uVar8 = *(undefined8 *)(param_4 + 0x10);
          uVar9 = FUN_015345a4(uVar3,uVar5,&DAT_00569628,0x10);
          FUN_01bed4e2((uint)auStack_48 | 7,puVar6,0x10);
          local_70 = CONCAT31(local_70._1_3_,2);
          FUN_01bed4e2((uint)&local_70 | 1,auStack_48,0x17);
          local_50 = uVar8;
          local_58 = uVar9;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(0x28);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x28);
          }
          puVar7 = &DAT_01cfb2d0;
        }
        else {
          uVar8 = *(undefined8 *)(param_4 + 0x10);
          uVar9 = FUN_015345a4(uVar3,uVar5,&DAT_00569628,0x10);
          FUN_01bed4e2((uint)auStack_48 | 7,puVar6,0x10);
          local_70 = CONCAT31(local_70._1_3_,2);
          FUN_01bed4e2((uint)&local_70 | 1,auStack_48,0x17);
          local_50 = uVar8;
          local_58 = uVar9;
          puVar4 = (undefined4 *)thunk_FUN_01be5118(0x28);
          if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(8,0x28);
          }
          puVar7 = &DAT_01cfb230;
        }
        *puVar4 = local_70;
        puVar4[1] = uStack_6c;
        puVar4[2] = uStack_68;
        puVar4[3] = uStack_64;
        puVar4[4] = uStack_60;
        puVar4[5] = local_5c;
        *(undefined8 *)(puVar4 + 6) = local_58;
        puVar4[8] = (undefined4)local_50;
        puVar4[9] = local_50._4_4_;
        param_1[1] = puVar4;
        param_1[2] = puVar7;
      }
      else {
        FUN_01555208(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                     &DAT_00569628,0x10,param_4);
      }
      *param_1 = 1;
      return;
    }
  }
  puVar6 = (uint *)(param_4 + 8);
  if (*param_4 == '\x02') {
    uVar3 = *(undefined4 *)(param_2 + 0x38);
    uVar5 = *(undefined4 *)(param_2 + 0x3c);
    if ((*puVar6 & 3) == 0) {
      uVar8 = *(undefined8 *)(param_4 + 0x10);
      uVar9 = FUN_015345a4(uVar3,uVar5,"minimum",7);
      FUN_01bed4e2((uint)auStack_48 | 7,puVar6,0x10);
      local_70 = CONCAT31(local_70._1_3_,2);
      FUN_01bed4e2((uint)&local_70 | 1,auStack_48,0x17);
      local_50 = uVar8;
      local_58 = uVar9;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0x28);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x28);
      }
      puVar7 = &DAT_01cfb250;
    }
    else if (*puVar6 == 2) {
      uVar8 = *(undefined8 *)(param_4 + 0x10);
      uVar9 = FUN_015345a4(uVar3,uVar5,"minimum",7);
      FUN_01bed4e2((uint)auStack_48 | 7,puVar6,0x10);
      local_70 = CONCAT31(local_70._1_3_,2);
      FUN_01bed4e2((uint)&local_70 | 1,auStack_48,0x17);
      local_50 = uVar8;
      local_58 = uVar9;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0x28);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x28);
      }
      puVar7 = &DAT_01cfb310;
    }
    else {
      uVar8 = *(undefined8 *)(param_4 + 0x10);
      uVar9 = FUN_015345a4(uVar3,uVar5,"minimum",7);
      FUN_01bed4e2((uint)auStack_48 | 7,puVar6,0x10);
      local_70 = CONCAT31(local_70._1_3_,2);
      FUN_01bed4e2((uint)&local_70 | 1,auStack_48,0x17);
      local_50 = uVar8;
      local_58 = uVar9;
      puVar4 = (undefined4 *)thunk_FUN_01be5118(0x28);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x28);
      }
      puVar7 = &DAT_01cfb1d0;
    }
    *puVar4 = local_70;
    puVar4[1] = uStack_6c;
    puVar4[2] = uStack_68;
    puVar4[3] = uStack_64;
    puVar4[4] = uStack_60;
    puVar4[5] = local_5c;
    *(undefined8 *)(puVar4 + 6) = local_58;
    puVar4[8] = (undefined4)local_50;
    puVar4[9] = local_50._4_4_;
    param_1[1] = puVar4;
    param_1[2] = puVar7;
  }
  else {
    FUN_01555208(param_1 + 1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                 "minimum",7,param_4);
  }
  *param_1 = 1;
  return;
}

