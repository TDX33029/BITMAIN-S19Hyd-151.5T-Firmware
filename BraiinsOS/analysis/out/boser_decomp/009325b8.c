// FUN_009325b8 @ 009325b8 size=1392 calls_out=17 calls_in=2
// strings: Invalid input values! | Unsupported pool protocol | Invalid format of pool URL | Missing host | Empty pool user nameevent open/boser/boser/src/web/graphql/bosminer/configurator.rs:965

void FUN_009325b8(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint local_34c;
  int local_348;
  undefined4 uStack_32c;
  undefined4 local_31c;
  int local_318;
  undefined4 local_314;
  undefined4 local_310;
  int local_30c;
  undefined4 local_308;
  undefined4 local_300;
  undefined *local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined2 local_238;
  undefined2 local_236;
  uint local_234;
  int local_230;
  uint local_22c;
  uint local_228;
  undefined4 *local_224;
  undefined4 local_220;
  uint local_218;
  undefined1 local_214;
  undefined1 auStack_213 [11];
  undefined4 local_208;
  int local_204;
  uint local_200;
  undefined2 local_1fc;
  undefined2 local_1fa;
  uint local_1f8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined1 auStack_108 [200];
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_29 [5];
  
  iVar8 = thunk_FUN_01be5118(0x15);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x15);
  }
  FUN_01bed4e2(iVar8,"Invalid input values!",0x15);
  bVar1 = false;
  local_310 = 0x80000000;
  local_31c = 0x80000000;
  if (param_2 == 0) goto LAB_00932840;
  local_2f8 = 0;
  local_300 = (undefined4 *)0x0;
  local_2f0 = 0;
  FUN_01ac814c(&local_1d0,&local_300,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  uVar15 = local_1d0;
  if (local_1d0 == 2) {
    uVar15 = 0;
    local_228 = 0x80000000;
    local_300 = (undefined4 *)((uint)local_300 & 0xffffff00);
LAB_00932770:
    bVar1 = true;
LAB_00932774:
    if (uVar15 == 0) {
      local_314 = 0x1a;
      local_318 = thunk_FUN_01be5118(0x1a);
      local_31c = 0x1a;
      if (local_318 == 0) {
        uVar14 = 0x1a;
        goto LAB_00932ae0;
      }
      uVar14 = 0x1a;
      pcVar10 = "Invalid format of pool URL";
    }
    else if (uVar15 == 1) {
      local_314 = 0x19;
      local_318 = thunk_FUN_01be5118(0x19);
      local_31c = 0x19;
      if (local_318 == 0) {
        uVar14 = 0x19;
LAB_00932ae0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar14);
      }
      uVar14 = 0x19;
      pcVar10 = "Unsupported pool protocol";
    }
    else {
      local_314 = 0xc;
      local_318 = thunk_FUN_01be5118(0xc);
      local_31c = 0xc;
      if (local_318 == 0) {
        uVar14 = 0xc;
        goto LAB_00932ae0;
      }
      uVar14 = 0xc;
      pcVar10 = "Missing host";
    }
    FUN_01bed4e2(local_318,pcVar10,uVar14);
  }
  else {
    uVar2 = (undefined1)local_1cc;
    FUN_01bed4e2(auStack_213,(int)&local_1cc + 1,0x43);
    local_214 = uVar2;
    local_218 = uVar15;
    if (local_1f8 != 0) {
      if (local_1f8 < local_200) {
        if (*(char *)(local_204 + local_1f8) < -0x40) {
LAB_009326b4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb514(local_204,local_200,0,local_1f8,&DAT_01d2fde8);
        }
      }
      else if (local_1f8 != local_200) goto LAB_009326b4;
    }
    uVar16 = FUN_01ac96dc(&local_218);
    FUN_01244504(&local_1d0,local_204,local_1f8,(int)uVar16,(int)((ulonglong)uVar16 >> 0x20));
    uVar2 = (undefined1)local_1d0;
    uVar15 = local_1d0 & 0xff;
    if (uVar15 == 5) {
      (**(code **)*local_1cc)();
      uVar15 = 1;
LAB_0093275c:
      local_228 = 0x80000000;
      local_300 = (undefined4 *)CONCAT31(local_300._1_3_,(char)uVar15);
      FUN_019bb7e0(local_208,local_204);
      goto LAB_00932770;
    }
    uVar5 = local_1d0._1_1_;
    FUN_01bed4e2(auStack_108,(uint)&local_1d0 | 2,0xc6);
    FUN_01ac8d30(&local_1d0,&local_218);
    uVar3 = (undefined1)local_1d0;
    uVar13 = local_1d0 & 0xff;
    if (uVar13 == 3) {
      uVar15 = 2;
      goto LAB_0093275c;
    }
    uVar6 = local_1d0._1_1_;
    FUN_01bed4e2((uint)&local_40 | 2,(uint)&local_1d0 | 2,0x12);
    local_1c8 = 0;
    local_1d0 = 0;
    local_2f4 = 0;
    local_3f = uVar6;
    local_40 = uVar3;
    local_1cc = (undefined4 *)&DAT_00000001;
    local_2f8 = 0x60000020;
    local_2fc = &DAT_01c24cec;
    local_300 = &local_1d0;
    if (uVar13 == 0) {
      iVar9 = FUN_012fb940(&local_300,local_3c,local_38);
    }
    else if (uVar13 == 1) {
      iVar9 = FUN_013095bc((uint)&local_40 | 1,&local_300);
    }
    else {
      iVar9 = FUN_005fdd28(&local_1d0,&DAT_0053340d);
      if ((iVar9 != 0) ||
         (iVar9 = FUN_01acf270((uint)&local_40 | 1,&local_1d0,&DAT_01c24cec), iVar9 != 0))
      goto LAB_00932b00;
      iVar9 = FUN_005fdd28(&local_1d0,"]",1);
    }
    uVar14 = local_1c8;
    puVar7 = local_1cc;
    uVar4 = local_1d0;
    if (iVar9 != 0) {
LAB_00932b00:
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,auStack_29,&DAT_01c24d04,&DAT_01d30334);
    }
    lVar17 = FUN_01ac98e4(&local_218);
    uVar11 = (uint)((ulonglong)lVar17 >> 0x20);
    if ((int)lVar17 == 0) {
      local_34c = 0x80000000;
    }
    else {
      uVar12 = 0;
      if (lVar17 < 0) {
LAB_00932a0c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,uVar11);
      }
      if (uVar11 == 0) {
        local_348 = 1;
        local_34c = 0;
      }
      else {
        local_348 = FUN_01298504(uVar11,1);
        uVar12 = 1;
        local_34c = uVar11;
        if (local_348 == 0) goto LAB_00932a0c;
      }
      FUN_01bed4e2(local_348,(int)lVar17,uVar11);
      uVar13 = uVar11;
    }
    local_220 = uVar14;
    local_224 = puVar7;
    local_228 = uVar4;
    FUN_01bed4e2((uint)&local_300 | 2,auStack_108,0xc6);
    local_230 = local_348;
    local_236 = local_1fa;
    local_238 = local_1fc;
    local_300 = (undefined4 *)CONCAT31(CONCAT21(local_300._2_2_,uVar5),uVar2);
    local_234 = local_34c;
    local_22c = uVar13;
    FUN_019bb7e0(local_208,local_204);
    bVar1 = uVar4 == 0x80000000;
    if (uVar4 == 0x80000000) goto LAB_00932774;
  }
  FUN_00934c88(&local_300);
LAB_00932840:
  if ((param_3 == 0) || (*(int *)(param_3 + 8) != 0)) {
    if (!bVar1) {
      *param_1 = 2;
      FUN_019bb7e0(0x15,iVar8);
      return;
    }
  }
  else {
    local_30c = thunk_FUN_01be5118(0x14);
    if (local_30c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x14);
    }
    FUN_01bed4e2(local_30c,
                 "Empty pool user nameevent open/boser/boser/src/web/graphql/bosminer/configurator.rs:965"
                 ,0x14);
    local_308 = 0x14;
    local_310 = 0x14;
  }
  *param_1 = 0;
  param_1[1] = uStack_32c;
  param_1[2] = 0x15;
  param_1[3] = iVar8;
  param_1[4] = 0x15;
  param_1[5] = local_31c;
  param_1[6] = local_318;
  param_1[7] = local_314;
  param_1[8] = local_310;
  param_1[9] = local_30c;
  param_1[10] = local_308;
  return;
}

