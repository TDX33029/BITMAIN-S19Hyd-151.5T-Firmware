// FUN_01982524 @ 01982524 size=1044 calls_out=3 calls_in=15
// strings: internal error: entered unreachable code

void FUN_01982524(char *param_1,undefined4 *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  uint local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  bVar1 = *(byte *)(param_2 + 7);
  cVar9 = '\n';
  if (bVar1 == 3) goto LAB_01982830;
  bVar5 = *(byte *)((int)param_2 + 0x1d);
  pcVar7 = (char *)*param_2;
  uVar8 = param_2[1];
  bVar10 = bVar5 != 3;
  if (bVar1 < 2) {
    if ((*(byte *)((int)param_2 + 0x1e) & 1) == 0) {
      if (bVar10 && bVar1 <= bVar5) {
LAB_019826a8:
        do {
          if (bVar5 == 1) {
            *(undefined1 *)((int)param_2 + 0x1d) = 3;
            if (uVar8 == 0) break;
            if (uVar8 == 1) {
              if (*pcVar7 != '.') break;
            }
            else if ((*pcVar7 != '.') || (pcVar7[1] != '/')) break;
            iVar4 = uVar8 - 1;
            cVar9 = '\a';
            if (uVar8 != 0) goto LAB_0198282c;
            puVar6 = &DAT_01d28224;
            goto LAB_01982910;
          }
          if (bVar5 != 2) goto LAB_019828f0;
          if (uVar8 == 0) {
LAB_01982700:
            if (uVar8 == 0) {
LAB_01982708:
              bVar5 = 1;
              *(undefined1 *)((int)param_2 + 0x1d) = 1;
              goto LAB_019826a8;
            }
          }
          else if (uVar8 == 1) {
            if (*pcVar7 == '.') goto LAB_01982708;
          }
          else {
            cVar2 = *pcVar7;
            bVar10 = cVar2 == '.';
            if (bVar10) {
              cVar2 = pcVar7[1];
            }
            if (!bVar10 || cVar2 != '/') goto LAB_01982700;
            if (uVar8 < 2) goto LAB_01982708;
          }
          FUN_0199f7d4(&local_44);
          *(undefined4 *)param_1 = local_40;
          *(undefined4 *)(param_1 + 4) = uStack_3c;
          *(undefined4 *)(param_1 + 8) = uStack_38;
          *(undefined4 *)(param_1 + 0xc) = local_34;
          *(undefined4 *)(param_1 + 0x10) = uStack_30;
          *(undefined4 *)(param_1 + 0x14) = uStack_2c;
          *(undefined4 *)(param_1 + 0x18) = uStack_28;
          uVar3 = uVar8 - local_44;
          if (uVar8 < local_44) goto LAB_01982920;
          cVar2 = *param_1;
          bVar5 = 2;
          param_2[1] = uVar3;
          uVar8 = uVar3;
          if (cVar2 != '\n') {
            return;
          }
        } while( true );
      }
      goto LAB_01982830;
    }
    if (!bVar10 || bVar5 < bVar1) goto LAB_01982830;
    while (bVar5 != 1) {
      if (bVar5 != 2) {
LAB_019828f0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d28254);
      }
      if (uVar8 < 2) {
        bVar5 = 1;
        *(undefined1 *)((int)param_2 + 0x1d) = 1;
      }
      else {
        FUN_0199f7d4(&local_44);
        *(undefined4 *)param_1 = local_40;
        *(undefined4 *)(param_1 + 4) = uStack_3c;
        *(undefined4 *)(param_1 + 8) = uStack_38;
        *(undefined4 *)(param_1 + 0xc) = local_34;
        *(undefined4 *)(param_1 + 0x10) = uStack_30;
        *(undefined4 *)(param_1 + 0x14) = uStack_2c;
        *(undefined4 *)(param_1 + 0x18) = uStack_28;
        uVar3 = uVar8 - local_44;
        if (uVar8 < local_44) {
LAB_01982920:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar3,uVar8,&DAT_01d28244);
        }
        cVar9 = *param_1;
        bVar5 = 2;
        param_2[1] = uVar3;
        uVar8 = uVar3;
        if (cVar9 != '\n') {
          return;
        }
      }
    }
LAB_01982814:
    cVar9 = '\x06';
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
    iVar4 = uVar8 - 1;
    if (uVar8 == 0) {
      puVar6 = &DAT_01d28234;
LAB_01982910:
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,0xffffffff,0,puVar6);
    }
  }
  else {
    if ((*(byte *)((int)param_2 + 0x1e) & 1) != 0) {
      if (!bVar10 || bVar5 < bVar1) goto LAB_01982830;
      while (bVar5 != 1) {
        if (bVar5 != 2) goto LAB_019828f0;
        if (uVar8 == 0) goto LAB_019828e4;
        FUN_0199f7d4(&local_44);
        *(undefined4 *)param_1 = local_40;
        *(undefined4 *)(param_1 + 4) = uStack_3c;
        *(undefined4 *)(param_1 + 8) = uStack_38;
        *(undefined4 *)(param_1 + 0xc) = local_34;
        *(undefined4 *)(param_1 + 0x10) = uStack_30;
        *(undefined4 *)(param_1 + 0x14) = uStack_2c;
        *(undefined4 *)(param_1 + 0x18) = uStack_28;
        uVar3 = uVar8 - local_44;
        if (uVar8 < local_44) goto LAB_01982920;
        cVar2 = *param_1;
        bVar5 = 2;
        param_2[1] = uVar3;
        uVar8 = uVar3;
        if (cVar2 != '\n') {
          return;
        }
      }
      goto LAB_01982814;
    }
    if (!bVar10 || bVar5 < bVar1) goto LAB_01982830;
    while (bVar5 != 1) {
      if (bVar5 != 2) goto LAB_019828f0;
      if (uVar8 == 0) goto LAB_019828e4;
      FUN_0199f7d4(&local_44);
      *(undefined4 *)param_1 = local_40;
      *(undefined4 *)(param_1 + 4) = uStack_3c;
      *(undefined4 *)(param_1 + 8) = uStack_38;
      *(undefined4 *)(param_1 + 0xc) = local_34;
      *(undefined4 *)(param_1 + 0x10) = uStack_30;
      *(undefined4 *)(param_1 + 0x14) = uStack_2c;
      *(undefined4 *)(param_1 + 0x18) = uStack_28;
      uVar3 = uVar8 - local_44;
      if (uVar8 < local_44) goto LAB_01982920;
      param_2[1] = uVar3;
      bVar5 = 2;
      uVar8 = uVar3;
      if (*param_1 != '\n') {
        return;
      }
    }
    *(undefined1 *)((int)param_2 + 0x1d) = 3;
    if (uVar8 == 0) goto LAB_01982830;
    if (uVar8 == 1) {
      uVar8 = 1;
      if (*pcVar7 != '.') goto LAB_01982830;
    }
    else {
      cVar2 = *pcVar7;
      bVar10 = cVar2 != '.';
      if (!bVar10) {
        cVar2 = pcVar7[1];
      }
      if (bVar10 || cVar2 != '/') goto LAB_01982830;
    }
    iVar4 = uVar8 - 1;
    cVar9 = '\a';
  }
LAB_0198282c:
  param_2[1] = iVar4;
LAB_01982830:
  *param_1 = cVar9;
  return;
LAB_019828e4:
  *(undefined1 *)((int)param_2 + 0x1d) = 1;
  goto LAB_01982830;
}

