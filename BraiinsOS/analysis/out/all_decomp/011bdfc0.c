// FUN_011bdfc0 @ 011bdfc0 size=440 calls_out=4 calls_in=3
// strings: 

/* WARNING: Removing unreachable block (ram,0x011bdffc) */

undefined4 FUN_011bdfc0(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  undefined4 unaff_r10;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  cVar9 = '\0';
  while (*(char *)(param_1 + 0x28) == '\x01') {
    bVar4 = false;
    cVar9 = *(char *)(param_1 + 0x29);
LAB_011be04c:
    bVar5 = true;
    bVar3 = true;
    if (bVar4) goto LAB_011be19c;
    switch(cVar9) {
    case '\t':
    case '\n':
    case '\r':
    case ' ':
      uVar2 = *(undefined1 *)(param_1 + 0x29);
      cVar1 = *(char *)(param_1 + 0x28);
      *(undefined1 *)(param_1 + 0x28) = 0;
      if ((cVar1 == '\x01') && (*(int *)(param_1 + 0xc) != -0x80000000)) {
        iVar8 = *(int *)(param_1 + 0x14);
        if (iVar8 == *(int *)(param_1 + 0xc)) {
          FUN_006029c0(param_1 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar8) = uVar2;
        *(int *)(param_1 + 0x14) = iVar8 + 1;
      }
      break;
    default:
      goto switchD_011be068_caseD_b;
    case ':':
      goto switchD_011be068_caseD_3a;
    }
  }
  FUN_011ef738(&local_30,param_1 + 0x18);
  bVar3 = false;
  if ((local_30 & 0xff) != 5) {
    if ((local_30 & 0xff) == 4) {
      *(char *)(param_1 + 0x29) = local_30._1_1_;
      *(undefined1 *)(param_1 + 0x28) = 1;
      bVar4 = bVar3;
      cVar9 = local_30._1_1_;
    }
    else {
      unaff_r10 = FUN_0157c4a0(local_30,uStack_2c);
      bVar4 = true;
    }
    goto LAB_011be04c;
  }
  bVar5 = false;
LAB_011be19c:
  if (bVar3) {
    return unaff_r10;
  }
  if (!bVar5) {
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    local_30 = 3;
    goto LAB_011be218;
  }
  if (cVar9 == ':') {
switchD_011be068_caseD_3a:
    uVar2 = *(undefined1 *)(param_1 + 0x29);
    cVar9 = *(char *)(param_1 + 0x28);
    *(undefined1 *)(param_1 + 0x28) = 0;
    if (cVar9 != '\x01') {
      return 0;
    }
    if (*(int *)(param_1 + 0xc) == -0x80000000) {
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x14);
    if (iVar8 == *(int *)(param_1 + 0xc)) {
      FUN_006029c0(param_1 + 0xc);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + iVar8) = uVar2;
    *(int *)(param_1 + 0x14) = iVar8 + 1;
    return 0;
  }
switchD_011be068_caseD_b:
  uVar6 = *(undefined4 *)(param_1 + 0x1c);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  local_30 = 6;
LAB_011be218:
  uVar6 = FUN_0157c50c(&local_30,uVar6,uVar7);
  return uVar6;
}

