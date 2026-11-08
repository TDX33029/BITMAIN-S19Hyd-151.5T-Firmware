// FUN_015461a0 @ 015461a0 size=868 calls_out=12 calls_in=1
// strings: else | else

undefined8 FUN_015461a0(undefined4 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auStack_3d8 [136];
  undefined1 local_350;
  int local_348;
  undefined4 local_344;
  undefined1 auStack_340 [104];
  int local_2d8;
  undefined4 local_2d4;
  undefined1 auStack_2d0 [104];
  int local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  int local_200;
  undefined4 local_1fc;
  undefined1 auStack_1f8 [104];
  undefined1 auStack_190 [112];
  undefined1 auStack_120 [112];
  int local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  
  uVar8 = *param_2;
  uVar9 = param_2[1];
  pcVar2 = (char *)FUN_0196b3a8(uVar8,uVar9,"if",2);
  if (pcVar2 == (char *)0x0) {
    iVar4 = 0;
    uVar5 = 0;
    goto LAB_015464e8;
  }
  iVar4 = 0;
  uVar5 = 0;
  if (*pcVar2 != '\x05') goto LAB_015464e8;
  iVar7 = 2;
  FUN_01545d70(auStack_3d8,param_1,"if",2);
  local_348 = 2;
  pcVar3 = (char *)FUN_0196b3a8(uVar8,uVar9,&DAT_0056c9d0,4);
  iVar6 = 2;
  if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\x05')) {
LAB_015462e4:
    local_2d8 = 2;
    pcVar3 = (char *)FUN_0196b3a8(uVar8,uVar9,"else",4);
    if ((pcVar3 == (char *)0x0) || (*pcVar3 != '\x05')) {
LAB_015463b4:
      uVar1 = FUN_016731b0(local_350,pcVar2);
      FUN_0156aca8(&local_98,auStack_3d8,pcVar2,uVar1);
      if (local_98 == 0) {
        iVar4 = FUN_01594a60();
      }
      else {
        local_260 = local_90;
        uStack_25c = uStack_8c;
        uStack_258 = uStack_88;
        local_264 = local_94;
        local_268 = local_98;
        FUN_01543160(&local_98,auStack_3d8,pcVar2 + 4);
        if (local_98 != 2) {
          FUN_01bed4e2(auStack_1f8,&local_90,0x68);
          FUN_01bed4e2(auStack_190,&local_348,0x70);
          FUN_01bed4e2(auStack_120,&local_2d8,0x70);
          local_b0 = local_268;
          uStack_ac = local_264;
          uStack_a8 = local_260;
          uStack_a4 = uStack_25c;
          uStack_a0 = uStack_258;
          local_1fc = local_94;
          local_200 = local_98;
          iVar4 = thunk_FUN_01be5118(0x164);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x164);
          }
          FUN_01bed4e2(iVar4,&local_200,0x164);
          uVar5 = 0;
          goto LAB_015464e0;
        }
        iVar4 = FUN_01594a60(local_94);
        FUN_01542eb4(&local_268);
      }
      if (iVar7 != 2) {
        FUN_015448f0(&local_2d8);
      }
    }
    else {
      FUN_01545d70(&local_200,param_1,"else",4);
      FUN_01543160(&local_98,&local_200,pcVar3 + 4);
      uVar8 = local_94;
      iVar7 = local_98;
      if (local_98 != 2) {
        FUN_01bed4e2(&local_268,&local_90,0x68);
        local_2d4 = uVar8;
        local_2d8 = iVar7;
        FUN_01bed4e2(auStack_2d0,&local_268,0x68);
        FUN_014ff9e0(&local_200);
        goto LAB_015463b4;
      }
      iVar4 = FUN_01594a60(local_94);
      FUN_014ff9e0(&local_200);
    }
    uVar5 = 1;
    if (iVar6 != 2) {
      FUN_015448f0(&local_348);
    }
  }
  else {
    FUN_01545d70(&local_200,param_1,&DAT_0056c9d0,4);
    FUN_01543160(&local_98,&local_200,pcVar3 + 4);
    uVar5 = local_94;
    iVar6 = local_98;
    if (local_98 != 2) {
      FUN_01bed4e2(&local_2d8,&local_90,0x68);
      local_344 = uVar5;
      local_348 = iVar6;
      FUN_01bed4e2(auStack_340,&local_2d8,0x68);
      FUN_014ff9e0(&local_200);
      goto LAB_015462e4;
    }
    iVar4 = FUN_01594a60(local_94);
    FUN_014ff9e0(&local_200);
    uVar5 = 1;
  }
LAB_015464e0:
  FUN_014ff9e0(auStack_3d8);
LAB_015464e8:
  return CONCAT44(iVar4,uVar5);
}

