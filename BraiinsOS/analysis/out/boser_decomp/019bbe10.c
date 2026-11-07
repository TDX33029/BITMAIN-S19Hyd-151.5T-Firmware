// FUN_019bbe10 @ 019bbe10 size=1080 calls_out=16 calls_in=1
// strings: mio: | mio: | A Tokio 1.x context was found; but IO is disabled. Call `enable_io` on the runtime builder to enable IO.

void FUN_019bbe10(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  code *pcVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint local_78;
  int *local_74;
  uint local_70;
  uint local_6c;
  int *local_68;
  int *local_64;
  uint local_60;
  int local_58;
  undefined4 local_54;
  int *local_50;
  uint local_4c;
  int **local_48;
  code *local_44;
  int *local_40;
  code *local_3c;
  int *local_38;
  code *local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  local_34 = FUN_012fd074;
  local_38 = &local_58;
  local_58 = param_3;
  local_54 = param_4;
  FUN_00664898(&local_48,&DAT_005a3549,&local_38);
  pcVar2 = local_44;
  local_38 = (int *)0x0;
  local_2c = (uint)local_2c._2_2_ << 0x10;
  local_34 = (code *)&DAT_000001b6;
  local_30 = (char *)0x1;
  FUN_019a581c(&local_50,&local_38,local_44,local_40);
  puVar9 = (uint *)((uint)&local_78 | 4);
  if (((char)local_50 == '\x04') || (((uint)local_50 & 0xff) == 4)) {
    FUN_019bb7e0(local_48,pcVar2);
    uVar10 = FUN_019ef7f4(&DAT_01d28304);
    piVar3 = (int *)(uVar10 >> 0x20);
    iVar4 = 0x180;
    if ((uVar10 & 1) != 0) {
      iVar4 = 0xb8;
    }
    piVar8 = (int *)((int)piVar3 + iVar4);
    if (*piVar8 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("A Tokio 1.x context was found, but IO is disabled. Call `enable_io` on the runtime builder to enable IO."
                   ,0x68,&DAT_01d28304);
    }
    piVar5 = piVar8 + 3;
    if ((char)*piVar5 == '\0') {
      bVar1 = (bool)hasExclusiveAccess(piVar5);
      if (!bVar1) goto LAB_019bbf24;
      *(char *)piVar5 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_019bbf24:
      FUN_0164fba8(piVar5);
    }
    FUN_0165098c(piVar5);
    FUN_019f8030(&local_38,piVar8 + 4);
    pcVar2 = local_34;
    piVar7 = local_38;
    pcVar6 = pcVar2;
    if (((char)local_38 == '\x04') || (((uint)local_38 & 0xff) == 4)) {
      FUN_01650a90(piVar5);
      if ((char)*piVar5 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *(char *)piVar5 = '\0';
            goto LAB_019bbfb4;
          }
        } while ((char)*piVar5 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(piVar5);
LAB_019bbfb4:
      piVar7 = (int *)((int)pcVar2 + 0x20);
      local_58 = CONCAT31(local_58._1_3_,3);
      local_50 = piVar7;
      if (4 < DAT_01d51b00) {
        local_40 = &local_58;
        local_48 = &local_50;
        local_3c = FUN_01609ae4;
        local_44 = FUN_015d0bcc;
        local_28 = &DAT_01d29800;
        local_2c = 9;
        local_30 = "mio:";
        local_34 = (code *)&DAT_00000009;
        local_38 = (int *)0x528f32;
        FUN_01ac6264(&DAT_005b6793,&local_48,5,&local_38);
      }
      FUN_01609584(&local_68,*piVar8,local_4c,piVar7,3);
      if ((char)local_68 != '\x04') {
        if ((char)*piVar5 == '\0') {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar1) goto LAB_019bc104;
          *(char *)piVar5 = '\x01';
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_019bc104:
          FUN_0164fba8(piVar5);
        }
        FUN_0165098c(piVar5);
        FUN_019f7f9c(piVar8 + 4,pcVar2);
        FUN_01650a90(piVar5);
        if ((char)*piVar5 == '\x01') {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *(char *)piVar5 = '\0';
              goto LAB_019bc160;
            }
          } while ((char)*piVar5 == '\x01');
        }
        ClearExclusiveLocal();
        FUN_0164f86c(piVar5);
LAB_019bc160:
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *(int *)pcVar2;
          bVar1 = (bool)hasExclusiveAccess(pcVar2);
        } while (!bVar1);
        *(int *)pcVar2 = iVar4 + -1;
        pcVar6 = (code *)local_64;
        piVar7 = local_68;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_019db52c(pcVar2);
        }
        goto LAB_019bc198;
      }
LAB_019bc1a8:
      if ((int)uVar10 != 2) {
        local_6c = local_6c & 0xffffff00;
        local_70 = local_4c;
        local_74 = (int *)pcVar6;
        goto LAB_019bc20c;
      }
      piVar7 = piVar3;
    }
    else {
      FUN_01650a90(piVar5);
      if ((char)*piVar5 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar1 = (bool)hasExclusiveAccess(piVar5);
          if (bVar1) {
            *(char *)piVar5 = '\0';
            goto LAB_019bc198;
          }
        } while ((char)*piVar5 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(piVar5);
LAB_019bc198:
      if (((uint)piVar7 & 0xff) == 4) goto LAB_019bc1a8;
      FUN_014397e4((int)uVar10,piVar3);
    }
    FUN_01bf01d6(local_4c);
    *puVar9 = (uint)piVar7;
    puVar9[1] = (uint)pcVar6;
  }
  else {
    local_64 = (int *)local_4c;
    local_68 = local_50;
    FUN_019bb7e0(local_48,pcVar2);
    local_74 = local_50;
    puVar9[1] = (uint)local_64;
    puVar9[2] = local_60;
  }
  uVar10 = 2;
LAB_019bc20c:
  local_78 = (uint)(uVar10 >> 0x20);
  param_1[1] = local_78;
  param_1[2] = local_74;
  param_1[3] = local_70;
  param_1[4] = local_6c;
  *param_1 = (int)uVar10;
  return;
}

