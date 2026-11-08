// FUN_019f613c @ 019f613c size=1040 calls_out=17 calls_in=1
// strings: Oh no! We never placed the Core back; this is a bug! | not a CurrentThre | expected MultiThread scheduler | expected `CurrentThread::Context` | core missing

void FUN_019f613c(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int extraout_r2;
  uint extraout_r3;
  char *pcVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined1 auStack_74 [12];
  uint local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  uint local_40;
  undefined4 uStack_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  
  if (*param_1 == 1) {
    if (param_1[6] != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("expected MultiThread scheduler",0x3d,&DAT_01d290e4);
    }
    iVar7 = param_1[7];
    pcVar5 = (char *)(iVar7 + 0x9c);
    if (*pcVar5 == '\0') {
      bVar2 = (bool)hasExclusiveAccess(pcVar5);
      if (bVar2) {
        *pcVar5 = '\x01';
        DataMemoryBarrier(0xb);
        goto LAB_019f6188;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_0164fba8(pcVar5);
LAB_019f6188:
    FUN_0165098c(pcVar5);
    if (*(char *)(iVar7 + 0xb4) == '\x01') {
      FUN_01650a90(pcVar5);
      if (*pcVar5 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(pcVar5);
          if (bVar2) {
            *pcVar5 = '\0';
            return;
          }
        } while (*pcVar5 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pcVar5);
      return;
    }
    *(undefined1 *)(iVar7 + 0xb4) = 1;
    FUN_01650a90(pcVar5);
    if (*pcVar5 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar2 = (bool)hasExclusiveAccess(pcVar5);
        if (bVar2) {
          *pcVar5 = '\0';
          goto LAB_019f6364;
        }
      } while (*pcVar5 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_0164f86c(pcVar5);
LAB_019f6364:
    if (*(int *)(iVar7 + 0x4c) != 0) {
      iVar8 = *(int *)(iVar7 + 0x4c) << 3;
      puVar10 = (undefined4 *)(*(int *)(iVar7 + 0x48) + 4);
      do {
        FUN_019f9800(*puVar10,iVar7 + 0xb8);
        iVar8 = iVar8 + -8;
        puVar10 = puVar10 + 2;
      } while (iVar8 != 0);
    }
    return;
  }
  FUN_019f6018(auStack_74,param_1[6],param_1[7]);
  if (param_1[6] != 0) {
    uVar9 = 0x35;
    puVar6 = &DAT_01d297b0;
    pcVar5 = "not a CurrentThre";
LAB_019f6490:
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(pcVar5,uVar9,puVar6);
  }
  piVar3 = (int *)param_1[7];
  piVar4 = param_1 + 5;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = 0;
  DataMemoryBarrier(0xb);
  if (iVar7 == 0) {
    uVar9 = 0x69;
    puVar6 = &DAT_01d29154;
    pcVar5 = "Oh no! We never placed the Core back, this is a bug!";
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar7 = FUN_0197ac0c(), iVar7 != 0))
    goto LAB_019f6490;
    goto LAB_019f6444;
  }
  do {
    iVar8 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar8 + 1;
  if (iVar8 < 0) goto LAB_019f6548;
  local_4c = 0;
  local_50 = 4;
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  local_5c = iVar7;
  local_48 = param_1 + 1;
  uVar13 = thunk_FUN_01bee35a(4,piVar3,0x20);
  local_64 = (undefined4)((ulonglong)uVar13 >> 0x20);
  puVar12 = (uint *)((int)uVar13 + extraout_r2);
  local_68 = extraout_r3;
  if ((char)puVar12[0xe] == '\x01') {
LAB_019f62b4:
    iVar8 = local_5c;
    if (0x7ffffffe < *puVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    if (puVar12[1] != 2) {
      local_40 = local_68;
      uStack_3c = local_64;
      local_38 = local_60;
      local_34 = local_5c;
      local_30 = local_58;
      uStack_2c = local_54;
      uStack_28 = local_50;
      uStack_24 = local_4c;
      piStack_20 = local_48;
      if ((local_68 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("expected `CurrentThread::Context`",0x43,&DAT_01d291d4);
      }
      if (local_60 != 0) {
        FUN_01306fc8(&DAT_01d291e4);
        goto LAB_019f6548;
      }
      local_34 = 0;
      if (local_5c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("core missing",0xc,&DAT_01d291f4);
      }
      uVar11 = puVar12[8];
      iVar7 = param_1[7];
      local_38 = 0;
      puVar12[8] = (uint)&local_40;
      FUN_019e5c98(local_5c,iVar7 + 0x80);
      puVar12[8] = uVar11;
      if (local_38 != 0) {
        FUN_01306fc8(&DAT_01d29204);
        goto LAB_019f6548;
      }
      local_38 = -1;
      if (local_34 == 0) {
        local_38 = 0;
      }
      else {
        FUN_019e5fac();
        local_38 = local_38 + 1;
      }
      local_34 = iVar8;
      FUN_019e5fd8(&local_40);
      goto LAB_019f6444;
    }
  }
  else if ((char)puVar12[0xe] != '\x02') {
    FUN_019a2bcc(puVar12,&LAB_019efb68);
    *(undefined1 *)(puVar12 + 0xe) = 1;
    goto LAB_019f62b4;
  }
  local_5c = 0;
  local_60 = 0;
  FUN_019e5c98(iVar7,param_1[7] + 0x80);
  if (local_60 != 0) {
    FUN_01306fc8(&DAT_01d29164);
LAB_019f6548:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x19f6548);
    (*pcVar1)();
  }
  if (local_5c != 0) {
    FUN_019e5fac();
  }
  local_60 = 0;
  local_5c = iVar7;
  FUN_019e5fd8(&local_68);
LAB_019f6444:
  FUN_019f6648(auStack_74);
  return;
}

