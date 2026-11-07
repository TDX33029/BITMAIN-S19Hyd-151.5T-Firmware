// FUN_014a4168 @ 014a4168 size=2192 calls_out=22 calls_in=1
// strings: ASCLCD | Enabled | InitialisingPool CallsPool AttemptsPool WaitPool AvWork Had Roll TimeWork Can RollWork Had ExpireWork Roll TimeWork DiffMin Diff CountMax Diff CountTimes SentBytes SentTimes RecvBytes RecvNet Bytes SentNet Bytes Recv | Temperature | MHS av | MHS 5s

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014a4168(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int unaff_r7;
  undefined4 *unaff_r8;
  int iVar8;
  undefined8 *puVar9;
  int in_r12;
  bool bVar10;
  undefined4 *local_c0;
  undefined4 uStack_bc;
  undefined4 *puStack_b8;
  undefined4 *puStack_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  undefined4 local_a0;
  undefined4 *local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined4 *puStack_80;
  undefined4 *local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  undefined4 *local_60;
  undefined4 *local_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char local_48 [24];
  int local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  if (*param_4 == -0x80000000) {
    iVar6 = -0x80000000;
  }
  else {
    unaff_r7 = param_4[4];
    if (unaff_r7 < 0) {
      uVar4 = 0;
LAB_014a41a0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,unaff_r7);
    }
    iVar8 = param_4[3];
    if (unaff_r7 == 0) {
      iVar6 = 0;
      in_r12 = 1;
    }
    else {
      uVar4 = 1;
      in_r12 = FUN_01298504(unaff_r7,1);
      if (in_r12 == 0) goto LAB_014a41a0;
      iVar6 = unaff_r7;
    }
    FUN_01bed4e2(in_r12,iVar8,unaff_r7);
    puVar9 = (undefined8 *)param_4[1];
    iVar8 = param_4[2];
    FUN_0196aa8c(&local_68,iVar8);
    if (local_68 == (undefined4 *)&DAT_80000000) {
      puVar3 = local_64;
LAB_014a49d4:
      FUN_00b16a84(param_4);
      local_68 = puVar3;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: response serialization failedAPI",0x22,&local_68,&DAT_01cf9524,
                   &DAT_01cf9514);
    }
    local_b0 = local_68;
    local_ac = local_64;
    local_a8 = local_60;
    for (iVar8 = iVar8 * 0xc0; unaff_r8 = local_b0, iVar8 != 0; iVar8 = iVar8 + -0xc0) {
      local_78 = -0x80000000;
      local_7c = (undefined4 *)0x0;
      local_84 = (undefined4 *)0x0;
      local_88 = (undefined4 *)0x0;
      puVar3 = (undefined4 *)FUN_014a7b90(&local_88,"ASCLCD",3,*(undefined4 *)(puVar9 + 0x13));
      if (puVar3 != (undefined4 *)0x0) goto LAB_014a49b4;
      puVar3 = (undefined4 *)
               FUN_014a7b24(&local_88,&DAT_0056d23c,4,*(undefined4 *)((int)puVar9 + 0xb4),
                            *(undefined4 *)(puVar9 + 0x17));
      if (((puVar3 != (undefined4 *)0x0) ||
          (puVar3 = (undefined4 *)FUN_014a7b90(&local_88,"ID",2,*(undefined4 *)((int)puVar9 + 0x9c))
          , puVar3 != (undefined4 *)0x0)) ||
         (puVar3 = (undefined4 *)
                   FUN_014a796c(&local_88,"Enabled",7,*(undefined1 *)((int)puVar9 + 0xbd)),
         puVar3 != (undefined4 *)0x0)) goto LAB_014a49b4;
      if (local_88 == (undefined4 *)&DAT_00000001) {
        local_68 = (undefined4 *)&DAT_0000000a;
        puVar3 = (undefined4 *)FUN_01966fbc(&local_68,0,0);
        goto LAB_014a49b4;
      }
      uVar1 = *(undefined1 *)((int)puVar9 + 0xbc);
      puVar3 = (undefined4 *)FUN_007025b0(&local_88,&DAT_00532460,6);
      iVar2 = local_78;
      if (puVar3 != (undefined4 *)0x0) goto LAB_014a49b4;
      if (local_88 == (undefined4 *)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      bVar10 = local_78 == -0x80000000;
      local_78 = -0x80000000;
      if (bVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_30 = iVar2;
      local_2c = local_74;
      uStack_28 = uStack_70;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar1) {
      case 0:
        uVar4 = 5;
        puVar3 = (undefined4 *)thunk_FUN_01be5118(5);
        if (puVar3 == (undefined4 *)0x0) {
LAB_014a4a0c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,uVar4);
        }
        *(undefined1 *)(puVar3 + 1) = 0x65;
        puVar7 = (undefined4 *)0x5;
        *puVar3 = 0x76696c41;
        break;
      case 1:
        uVar4 = 4;
        puVar3 = (undefined4 *)thunk_FUN_01be5118(4);
        if (puVar3 == (undefined4 *)0x0) goto LAB_014a4a0c;
        uVar4 = 0x6b636953;
        goto LAB_014a4494;
      case 2:
        uVar4 = 4;
        puVar3 = (undefined4 *)thunk_FUN_01be5118(4);
        if (puVar3 == (undefined4 *)0x0) goto LAB_014a4a0c;
        uVar4 = 0x64616544;
LAB_014a4494:
        *puVar3 = uVar4;
        puVar7 = (undefined4 *)0x4;
        break;
      case 3:
        uVar4 = 7;
        puVar3 = (undefined4 *)thunk_FUN_01be5118(7);
        if (puVar3 == (undefined4 *)0x0) goto LAB_014a4a0c;
        *(undefined4 *)((int)puVar3 + 3) = 0x74726174;
        uVar4 = 0x74536f4e;
        goto LAB_014a44cc;
      case 4:
        uVar4 = 0xc;
        puVar3 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar3 == (undefined4 *)0x0) goto LAB_014a4a0c;
        puVar7 = (undefined4 *)0xc;
        FUN_01bed4e2(puVar3,
                     "InitialisingPool CallsPool AttemptsPool WaitPool AvWork Had Roll TimeWork Can RollWork Had ExpireWork Roll TimeWork DiffMin Diff CountMax Diff CountTimes SentBytes SentTimes RecvBytes RecvNet Bytes SentNet Bytes Recv"
                     ,0xc);
        break;
      case 5:
        uVar4 = 7;
        puVar3 = (undefined4 *)thunk_FUN_01be5118(7);
        if (puVar3 == (undefined4 *)0x0) goto LAB_014a4a0c;
        *(undefined4 *)((int)puVar3 + 3) = 0x6e776f6e;
        uVar4 = 0x6e6b6e55;
LAB_014a44cc:
        *puVar3 = uVar4;
        puVar7 = (undefined4 *)0x7;
      }
      local_68 = (undefined4 *)CONCAT31(local_68._1_3_,3);
      local_64 = puVar7;
      local_60 = puVar3;
      local_5c = puVar7;
      FUN_0196b484(local_48,(uint)&local_88 | 4,&local_30,&local_68);
      if (local_48[0] != '\x06') {
        FUN_00db4764(local_48);
      }
      puVar3 = (undefined4 *)FUN_014a7bf4((int)*puVar9,&local_88,"Temperature",0xb);
      if (((((puVar3 != (undefined4 *)0x0) ||
            (puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[1],&local_88,"MHS av",6),
            puVar3 != (undefined4 *)0x0)) ||
           ((puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[2],&local_88,"MHS 5s",6),
            puVar3 != (undefined4 *)0x0 ||
            ((puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[3],&local_88,"MHS 1m",6),
             puVar3 != (undefined4 *)0x0 ||
             (puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[4],&local_88,"MHS 5m",6),
             puVar3 != (undefined4 *)0x0)))))) ||
          (puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[5],&local_88,"MHS 15m",7),
          puVar3 != (undefined4 *)0x0)) ||
         ((((puVar3 = (undefined4 *)
                      FUN_014a7b90(&local_88,&DAT_005706e0,8,*(undefined4 *)(puVar9 + 0x14)),
            puVar3 != (undefined4 *)0x0 ||
            (puVar3 = (undefined4 *)
                      FUN_014a7b90(&local_88,&DAT_00570990,8,*(undefined4 *)((int)puVar9 + 0xa4)),
            puVar3 != (undefined4 *)0x0)) ||
           (puVar3 = (undefined4 *)
                     FUN_014a7b90(&local_88,"Hardware Errors",0xf,*(undefined4 *)(puVar9 + 0x15)),
           puVar3 != (undefined4 *)0x0)) ||
          ((puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[6],&local_88,"Utility",7),
           puVar3 != (undefined4 *)0x0 ||
           (puVar3 = (undefined4 *)
                     FUN_014a7b90(&local_88,"Last Share Pool",0xf,
                                  *(undefined4 *)((int)puVar9 + 0xac)), puVar3 != (undefined4 *)0x0)
           ))))) {
LAB_014a49b4:
        FUN_0126ee34(&local_88);
LAB_014a49bc:
        FUN_00949b70(&local_b0);
        goto LAB_014a49d4;
      }
      puVar3 = (undefined4 *)FUN_014a7ab8(&local_88,"Last Share Time",0xf);
      if ((puVar3 != (undefined4 *)0x0) ||
         (puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[8],&local_88,&DAT_0056fb58,8),
         puVar3 != (undefined4 *)0x0)) goto LAB_014a49b4;
      puVar3 = (undefined4 *)FUN_014a7ab8(&local_88,"Diff1 Work",10);
      if (((puVar3 != (undefined4 *)0x0) ||
          (puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[10],&local_88,"Difficulty Accepted",0x13)
          , puVar3 != (undefined4 *)0x0)) ||
         ((puVar3 = (undefined4 *)
                    FUN_014a7bf4((int)puVar9[0xb],&local_88,"Difficulty Rejected",0x13),
          puVar3 != (undefined4 *)0x0 ||
          (puVar3 = (undefined4 *)
                    FUN_014a7bf4((int)puVar9[0xc],&local_88,"Last Share Difficulty",0x15),
          puVar3 != (undefined4 *)0x0)))) goto LAB_014a49b4;
      puVar3 = (undefined4 *)FUN_014a7ab8(&local_88,"Last Valid Work",0xf);
      if (((puVar3 != (undefined4 *)0x0) ||
          (puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[0xe],&local_88,&DAT_00568438,0x10),
          puVar3 != (undefined4 *)0x0)) ||
         (puVar3 = (undefined4 *)FUN_014a7bf4((int)puVar9[0xf],&local_88,&DAT_00568158,0x10),
         puVar3 != (undefined4 *)0x0)) goto LAB_014a49b4;
      puVar3 = (undefined4 *)FUN_014a7ab8(&local_88,"Device Elapsed",0xe);
      if (((puVar3 != (undefined4 *)0x0) ||
          (puVar3 = (undefined4 *)
                    FUN_014a7bf4((int)puVar9[0x11],&local_88,"Hardware Error MHS 15m",0x16),
          puVar3 != (undefined4 *)0x0)) ||
         (puVar3 = (undefined4 *)
                   FUN_014a7bf4((int)puVar9[0x12],&local_88,"Nominal MHSGHS avGHS 5mGHS 5s",0xb),
         puVar3 != (undefined4 *)0x0)) goto LAB_014a49b4;
      local_68 = local_88;
      local_64 = local_84;
      local_60 = puStack_80;
      local_5c = local_7c;
      iStack_58 = local_78;
      uStack_54 = local_74;
      uStack_50 = uStack_70;
      uStack_4c = uStack_6c;
      FUN_0196ac88(&local_a0);
      puVar3 = local_a8;
      if ((char)local_a0 == '\x06') {
        puVar3 = local_9c;
        goto LAB_014a49bc;
      }
      if (local_a8 == local_b0) {
        FUN_01969b6c(&local_b0);
      }
      puVar9 = puVar9 + 0x18;
      puVar7 = local_ac + (int)puVar3 * 6;
      *puVar7 = local_a0;
      puVar7[1] = local_9c;
      puVar7[2] = uStack_98;
      puVar7[3] = uStack_94;
      puVar7[4] = uStack_90;
      puVar7[5] = uStack_8c;
      local_a8 = (undefined4 *)((int)puVar3 + 1);
    }
    local_68 = *(undefined4 **)((uint)&local_b0 | 4);
    local_64 = (undefined4 *)((undefined4 *)((uint)&local_b0 | 4))[1];
    FUN_00b16a84(param_4);
    local_c0 = local_68;
    uStack_bc = local_64;
    puStack_b8 = local_60;
    puStack_b4 = local_5c;
  }
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  param_1[0xc] = *param_3;
  param_1[0xd] = uVar4;
  param_1[0xe] = uVar5;
  *(undefined1 *)(param_1 + 6) = 4;
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = iVar6;
  param_1[3] = in_r12;
  *(undefined1 *)(param_1 + 0xf) = 2;
  param_1[7] = unaff_r8;
  param_1[4] = unaff_r7;
  param_1[8] = local_c0;
  param_1[9] = uStack_bc;
  param_1[10] = puStack_b8;
  param_1[0xb] = puStack_b4;
  return;
}

