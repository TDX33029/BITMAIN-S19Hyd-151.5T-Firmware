// FUN_01b8c328 @ 01b8c328 size=896 calls_out=6 calls_in=1
// strings: 

void FUN_01b8c328(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int local_10c;
  int local_108;
  uint local_100 [6];
  uint uStack_e8;
  undefined1 auStack_dc [4];
  undefined1 local_d8 [40];
  int local_b0;
  int local_88;
  int local_5c;
  undefined4 local_58;
  int local_34;
  int local_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bed4e2(auStack_dc,param_1 + 0xc,0xb0,0);
  local_10c = *(int *)(param_1 + 0x38);
  iVar6 = *(int *)(param_1 + 0x3c);
  uVar7 = *(undefined4 *)(param_1 + 0x90);
  iVar8 = *(int *)(param_1 + 0xb4);
  local_108 = *(int *)(param_1 + 0xb8);
  iVar9 = *(int *)(param_1 + 0x9a8);
  uVar10 = *(undefined4 *)(param_1 + 0x9ac);
  uVar11 = *(undefined4 *)(param_1 + 0x9b0);
  iVar16 = *(int *)(param_1 + 0x48);
  iVar14 = *(int *)(param_1 + 0x60);
  iVar13 = *(int *)(param_1 + 0x8c);
  if ((*(int *)(param_1 + 0x994) != 0) && (*(int *)(param_1 + 0x9a0) == 0)) {
    iVar1 = FUN_01b8bed8(*(int *)(param_1 + 0x994),*(undefined4 *)(param_1 + 0x998),1,
                         *(undefined4 *)(param_1 + 0x99c),param_1 + 0xc,
                         *(undefined4 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2cc),
                         *(undefined4 *)(param_1 + 0x2d0));
    *(int *)(param_1 + 0x9a0) = iVar1;
    if (iVar1 == 0) goto LAB_01b8c654;
    *(int *)(param_1 + 0x9a4) = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x9a4);
  *(undefined4 *)(param_1 + 0x9a8) = 0;
  *(undefined4 *)(param_1 + 0x9ac) = 0;
  *(undefined4 *)(param_1 + 0x9b0) = 0;
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x9a0) == 0)) {
    local_10c = *(int *)(iVar1 + 0x1324);
  }
  if (param_2 == 2) {
    *(undefined4 *)(param_1 + 0x25c) = 0;
    *(int *)(param_1 + 600) = param_3 + 1;
  }
  if (iVar9 == 0) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(iVar1 + 4);
    }
  }
  else {
    uVar2 = uVar10;
  }
  iVar4 = *(int *)(param_1 + 600);
  uVar15 = iVar4 - 1;
  iVar12 = *(int *)(param_1 + 0x25c) - (uint)(iVar4 == 0);
  if (iVar1 == 0) {
    bVar5 = false;
  }
  else if (*(int *)(iVar1 + 0xac) == 0) {
    if (iVar12 == -1 && iVar4 == 0 ||
        (uint)-iVar12 < (uint)(uVar15 <= *(uint *)(&DAT_005627ec + *(int *)(iVar1 + 0x110) * 4))) {
      bVar5 = false;
      if (iVar16 != 2) goto LAB_01b8c4e4;
    }
    else if (iVar16 == 1) {
LAB_01b8c4e4:
      bVar5 = iVar6 == 0;
    }
    else {
      bVar5 = false;
    }
  }
  else {
    bVar5 = true;
  }
  local_b0 = local_10c;
  FUN_01b88308(local_100,auStack_dc,uVar15,iVar12,uVar2,bVar5);
  if (iVar13 == 0) {
    if ((uStack_e8 < 7) || (local_100[0] < 0x11)) {
      iVar13 = 2;
      goto LAB_01b8c560;
    }
    iVar13 = 1;
    if (iVar14 == 0) goto LAB_01b8c574;
  }
  else {
LAB_01b8c560:
    if (iVar14 == 0) {
      if (uStack_e8 < 7) {
        iVar14 = 2;
      }
      else {
LAB_01b8c574:
        if (local_100[0] < 0x1b) {
          iVar14 = 2;
        }
        else {
          iVar14 = 1;
        }
      }
    }
  }
  local_88 = iVar14;
  local_5c = iVar13;
  local_58 = FUN_01b86020(uVar7,local_d8);
  if (iVar8 == 0) {
    iVar8 = 0x20000;
  }
  if (local_108 == 0) {
    if (local_10c < 10) {
      local_108 = 2;
    }
    else {
      local_108 = 1;
    }
  }
  local_30 = local_108;
  iVar6 = 0;
  local_34 = iVar8;
  uVar3 = FUN_01b8b308(param_1,iVar9,uVar10,uVar11,0,iVar1,auStack_dc);
  if (uVar3 < 0xffffff89) {
    *(undefined4 *)(param_1 + 0x958) = 0;
    *(undefined4 *)(param_1 + 0x95c) = 0;
    if (*(int *)(param_1 + 300) == 0) {
      iVar6 = (uint)(iVar12 == 0 && *(uint *)(param_1 + 0x250) == uVar15) +
              *(uint *)(param_1 + 0x250);
    }
    *(int *)(param_1 + 0x960) = iVar6;
    *(undefined4 *)(param_1 + 0x970) = 0;
    *(undefined4 *)(param_1 + 0x96c) = 0;
    *(undefined4 *)(param_1 + 0x974) = 1;
    *(undefined4 *)(param_1 + 0x978) = 0;
  }
LAB_01b8c654:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

