// FUN_017dd36c @ 017dd36c size=656 calls_out=13 calls_in=1
// strings: 

void FUN_017dd36c(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  undefined1 *puVar7;
  uint uVar8;
  char cVar9;
  undefined1 *puVar10;
  undefined *unaff_r11;
  bool bVar11;
  undefined8 uVar12;
  undefined1 auStack_318 [296];
  undefined1 auStack_1f0 [80];
  undefined1 auStack_1a0 [296];
  undefined4 *local_78;
  undefined *local_74;
  undefined4 local_70;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x4e]) {
  case '\0':
    FUN_01bed4e2(auStack_318,param_2 + 4,0x128);
    puVar10 = (undefined1 *)param_2[2];
    if (puVar10 != &DAT_3b9aca00) {
      uVar8 = *param_2;
      unaff_r11 = (undefined *)param_2[1];
      FUN_019ac130(&local_78,1);
      puVar7 = (undefined1 *)((int)local_78 + uVar8);
      puVar3 = local_74 + (int)unaff_r11 + CARRY4((uint)local_78,uVar8);
      if ((int)unaff_r11 < 0 ==
          (int)(((uint)local_74 ^ (uint)puVar3) & ~((uint)local_74 ^ (uint)unaff_r11)) < 0) {
        puVar10 = puVar10 + local_70;
        if (&DAT_3b9aca00 <= puVar10) {
          bVar11 = (undefined1 *)0xfffffffe < puVar7;
          puVar7 = puVar7 + 1;
          if ((int)(((uint)puVar3 ^ (uint)(puVar3 + bVar11)) & ~(uint)puVar3) < 0)
          goto LAB_017dd4a0;
          puVar10 = puVar10 + -1000000000;
          puVar3 = puVar3 + bVar11;
        }
        uVar12 = FUN_019ef7f4(&DAT_01d1cb9c);
        uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
        FUN_019dc4f8(&local_78,(int)uVar12,uVar5,uVar5,puVar7,puVar3,puVar10,&DAT_01d1cb9c);
      }
      else {
LAB_017dd4a0:
        FUN_019e6e14(&local_78);
      }
      FUN_01bed4e2(auStack_1a0,auStack_318,0x128);
      FUN_01bed4e2(auStack_1f0,&local_78,0x50);
      FUN_01bed4e2(param_2 + 0x50,auStack_1f0,0x178);
      goto switchD_017dd394_caseD_3;
    }
    FUN_01bed4e2(param_2 + 0x50,param_2 + 4,0x128);
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1cbac);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1cbac);
  case '\x03':
switchD_017dd394_caseD_3:
    sVar6 = (short)&local_70 + 2;
    bVar2 = FUN_019ec70c();
    FUN_01799d68(&local_78,param_2 + 100,param_3);
    if (local_70._1_1_ == '\x03') {
      iVar4 = FUN_019ee264(bVar2 == 2 | bVar2 & 1,param_2 + 0x50,*param_3);
      if (iVar4 != 0) {
        uVar1 = 3;
        *(undefined1 *)((int)param_1 + 9) = 3;
        goto LAB_017dd5ec;
      }
      cVar9 = '\x03';
    }
    else {
      sVar6 = (short)((uint)local_70 >> 0x10);
      param_3 = local_78;
      unaff_r11 = local_74;
      bVar2 = (byte)local_70;
      cVar9 = local_70._1_1_;
    }
    FUN_017dd670(param_2 + 0x50);
    local_70._1_1_ = '\x02';
    if (cVar9 == '\x03') {
      param_3 = (undefined4 *)&DAT_00000001;
      unaff_r11 = &DAT_01d1cbcc;
    }
    else {
      local_70._1_1_ = '\x02';
      if (cVar9 != '\x02') {
        local_70._1_1_ = cVar9;
      }
    }
    goto LAB_017dd5d8;
  }
  FUN_017dd6a4(&local_78,param_2 + 0x50,param_3);
  if (local_70._1_1_ == '\x03') {
    *(undefined1 *)((int)param_1 + 9) = 3;
    uVar1 = 4;
  }
  else {
    FUN_017dd0f4(param_2 + 0x50);
    param_3 = local_78;
    unaff_r11 = local_74;
    sVar6 = local_70._2_2_;
    bVar2 = (byte)local_70;
LAB_017dd5d8:
    *(short *)((int)param_1 + 10) = sVar6;
    uVar1 = 1;
    *(char *)((int)param_1 + 9) = local_70._1_1_;
    *(byte *)(param_1 + 2) = bVar2;
    *param_1 = param_3;
    param_1[1] = unaff_r11;
  }
LAB_017dd5ec:
  *(undefined1 *)(param_2 + 0x4e) = uVar1;
  return;
}

