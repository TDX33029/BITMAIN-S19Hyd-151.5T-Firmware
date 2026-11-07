// FUN_005b6d34 @ 005b6d34 size=1048 calls_out=4 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x005b6e04) */

void FUN_005b6d34(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  
  cVar7 = *(char *)(param_2 + 0x2d);
  cVar1 = *(char *)(param_2 + 0x2c);
  *(undefined1 *)(param_2 + 0x2c) = 0;
  if (cVar1 == '\x01') {
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar11 = *(int *)(param_2 + 0x14);
      if (iVar11 == *(int *)(param_2 + 0xc)) {
LAB_005b70ac:
        FUN_006029c0(param_2 + 0xc);
      }
LAB_005b6d6c:
      *(char *)(*(int *)(param_2 + 0x10) + iVar11) = cVar7;
      *(int *)(param_2 + 0x14) = iVar11 + 1;
    }
  }
  else {
    pcVar9 = *(char **)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x1c) == 0) {
      *(char **)(param_2 + 0x18) = pcVar9;
      local_38 = 5;
      uVar5 = FUN_0157c50c(&local_38,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
                          );
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = uVar5;
      return;
    }
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
    cVar7 = *pcVar9;
    iVar11 = *(int *)(param_2 + 0x24) + 1;
    *(char **)(param_2 + 0x18) = pcVar9 + 1;
    if (cVar7 == '\n') {
      *(int *)(param_2 + 0x28) = iVar11 + *(int *)(param_2 + 0x28);
      *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
      iVar11 = 0;
    }
    *(int *)(param_2 + 0x24) = iVar11;
    if (*(int *)(param_2 + 0xc) != -0x80000000) {
      iVar11 = *(int *)(param_2 + 0x14);
      if (iVar11 == *(int *)(param_2 + 0xc)) goto LAB_005b70ac;
      goto LAB_005b6d6c;
    }
  }
  if (cVar7 == '0') {
    if (*(char *)(param_2 + 0x2c) == '\x01') {
      uVar6 = (uint)*(byte *)(param_2 + 0x2d);
    }
    else {
      pbVar10 = *(byte **)(param_2 + 0x18);
      if (*(int *)(param_2 + 0x1c) == 0) {
        *(byte **)(param_2 + 0x18) = pbVar10;
        goto LAB_005b70dc;
      }
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      bVar3 = *pbVar10;
      uVar6 = (uint)bVar3;
      iVar11 = *(int *)(param_2 + 0x24) + 1;
      *(byte **)(param_2 + 0x18) = pbVar10 + 1;
      if (uVar6 == 10) {
        *(int *)(param_2 + 0x28) = iVar11 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar11 = 0;
      }
      *(byte *)(param_2 + 0x2d) = bVar3;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar11;
    }
    if (9 < uVar6 - 0x30) {
LAB_005b70dc:
      FUN_005b67e0();
      return;
    }
  }
  else if ((byte)(cVar7 - 0x31U) < 9) {
    uVar4 = (ulonglong)(byte)(cVar7 - 0x30);
    while( true ) {
      uVar6 = (uint)(uVar4 >> 0x20);
      if (*(char *)(param_2 + 0x2c) == '\x01') {
        uVar8 = *(byte *)(param_2 + 0x2d) - 0x30 & 0xff;
      }
      else {
        pcVar9 = *(char **)(param_2 + 0x18);
        if (*(int *)(param_2 + 0x1c) == 0) {
          *(char **)(param_2 + 0x18) = pcVar9;
          break;
        }
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
        cVar7 = *pcVar9;
        *(char **)(param_2 + 0x18) = pcVar9 + 1;
        iVar11 = *(int *)(param_2 + 0x24) + 1;
        if (cVar7 == '\n') {
          *(int *)(param_2 + 0x28) = iVar11 + *(int *)(param_2 + 0x28);
          iVar11 = 0;
          *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        }
        *(char *)(param_2 + 0x2d) = cVar7;
        *(undefined1 *)(param_2 + 0x2c) = 1;
        *(int *)(param_2 + 0x24) = iVar11;
        uVar8 = (uint)(byte)(cVar7 - 0x30);
      }
      if (9 < uVar8) break;
      if ((0x19999998 < uVar6 && (uint)((uint)uVar4 < 0x99999999) <= 0x19999999 - uVar6) &&
         ((uVar4 != 0x1999999999999999 || (5 < uVar8)))) {
        FUN_00f2b2e0(&local_38);
        if (local_38 == 1) {
          param_1[2] = local_34;
          *param_1 = 3;
          param_1[1] = 0;
          return;
        }
        *(undefined8 *)(param_1 + 2) = local_30;
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      uVar2 = *(undefined1 *)(param_2 + 0x2d);
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (*(int *)(param_2 + 0xc) != -0x80000000) {
        iVar11 = *(int *)(param_2 + 0x14);
        if (iVar11 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(param_2 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar11) = uVar2;
        *(int *)(param_2 + 0x14) = iVar11 + 1;
      }
      uVar4 = (uVar4 & 0xffffffff) * 10 + CONCAT44(uVar6 * 10,uVar8);
    }
    FUN_005b67e0();
    return;
  }
  local_38 = 0xd;
  uVar5 = FUN_0157c50c(&local_38,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = uVar5;
  return;
}

