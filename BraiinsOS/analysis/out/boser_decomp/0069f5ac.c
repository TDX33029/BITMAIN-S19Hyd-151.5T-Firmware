// FUN_0069f5ac @ 0069f5ac size=1200 calls_out=15 calls_in=3
// strings: ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0069f700) */
/* WARNING: Removing unreachable block (ram,0x0069fd28) */
/* WARNING: Removing unreachable block (ram,0x0069f718) */
/* WARNING: Removing unreachable block (ram,0x0069f730) */
/* WARNING: Removing unreachable block (ram,0x0069f720) */
/* WARNING: Removing unreachable block (ram,0x0069f73c) */
/* WARNING: Removing unreachable block (ram,0x0069f748) */
/* WARNING: Removing unreachable block (ram,0x0069f74c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_0069f5ac(undefined4 *param_1,char *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  char *pcVar6;
  int iVar7;
  byte bVar8;
  undefined4 uVar9;
  uint *puVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  bool bVar17;
  undefined8 uVar18;
  int local_c0;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_7c;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 uStack_63;
  undefined1 local_59;
  undefined1 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  int local_48;
  char *local_44;
  int local_40;
  undefined1 *local_3c;
  
  local_74 = (uint)local_74._1_3_ << 8;
  if ((param_3 == 0) || (*param_2 != '/')) {
    FUN_0197b690(&local_48);
    pcVar11 = local_44;
    iVar16 = local_48;
    if (local_48 == -0x80000000) {
      *(undefined1 *)(param_1 + 3) = 2;
      *param_1 = local_44;
      param_1[1] = local_40;
      return;
    }
    FUN_019a66e4(&local_48,local_44,local_40,param_2,param_3);
    local_c0 = local_48;
    FUN_019bb7e0(iVar16,pcVar11);
    uVar9 = 0;
    bVar5 = false;
    param_3 = local_40;
    param_2 = local_44;
  }
  else {
    uVar9 = 1;
    bVar5 = true;
  }
  uVar18 = thunk_FUN_01bee35a(uVar9,600);
  puVar10 = (uint *)((int)uVar18 + (int)((ulonglong)uVar18 >> 0x20));
  if ((char)puVar10[2] == '\0') {
    puVar10 = (uint *)FUN_01340514(puVar10,0);
  }
  uVar13 = *puVar10 + 0xaa6c78a5;
  uVar14 = puVar10[1] + 0x2d358dcc + (uint)(0x5593875a < *puVar10);
  *puVar10 = uVar13;
  puVar10[1] = uVar14;
  uVar3 = (ulonglong)uVar13 * (ulonglong)(uVar13 ^ 0x962eacc9);
  lVar1 = (ulonglong)uVar13 * (ulonglong)(uVar14 ^ 0x8bb84b93) + (uVar3 >> 0x20);
  uVar15 = (uint)((ulonglong)lVar1 >> 0x20);
  lVar4 = (ulonglong)uVar14 * (ulonglong)(uVar13 ^ 0x962eacc9);
  uVar13 = (uint)((ulonglong)lVar4 >> 0x20);
  lVar2 = (ulonglong)uVar14 * (ulonglong)(uVar14 ^ 0x8bb84b93) +
          (ulonglong)
          CONCAT14(CARRY4(uVar15,uVar13) ||
                   CARRY4(uVar15 + uVar13,(uint)CARRY4((uint)lVar4,(uint)lVar1)),
                   (int)((ulonglong)(lVar1 + lVar4) >> 0x20));
  uVar14 = (uint)((ulonglong)lVar2 >> 0x20) ^ (uint)(lVar1 + lVar4);
  uVar13 = (uint)lVar2 ^ (uint)uVar3;
  pcVar11 = (char *)FUN_01298504(10,1);
  if (pcVar11 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,10);
  }
  local_70 = 0;
  iVar16 = 6;
  *(undefined4 *)pcVar11 = 0x706d742e;
  local_48 = 10;
  local_40 = 4;
  local_44 = pcVar11;
  do {
    bVar17 = 0x5593875a < uVar13;
    uVar13 = uVar13 + 0xaa6c78a5;
    uVar14 = uVar14 + 0x2d358dcc + (uint)bVar17;
    uVar3 = (ulonglong)uVar13 * (ulonglong)(uVar13 ^ 0x962eacc9);
    lVar1 = (ulonglong)uVar13 * (ulonglong)(uVar14 ^ 0x8bb84b93) + (uVar3 >> 0x20);
    lVar2 = (ulonglong)uVar14 * (ulonglong)(uVar13 ^ 0x962eacc9);
    uVar15 = (uVar14 ^ 0x8bb84b93) * uVar14 +
             (int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) +
             (uint)CARRY4((uint)lVar2,(uint)lVar1) ^ (uint)uVar3;
    if (uVar15 * 0x3e < 4) {
      do {
        bVar17 = 0x5593875a < uVar13;
        uVar13 = uVar13 + 0xaa6c78a5;
        uVar14 = uVar14 + 0x2d358dcc + (uint)bVar17;
        uVar3 = (ulonglong)uVar13 * (ulonglong)(uVar13 ^ 0x962eacc9);
        lVar1 = (ulonglong)uVar13 * (ulonglong)(uVar14 ^ 0x8bb84b93) + (uVar3 >> 0x20);
        lVar2 = (ulonglong)uVar14 * (ulonglong)(uVar13 ^ 0x962eacc9);
        uVar15 = uVar14 * (uVar14 ^ 0x8bb84b93) +
                 (int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) +
                 (uint)CARRY4((uint)lVar2,(uint)lVar1) ^ (uint)uVar3;
      } while (uVar15 * 0x3e < 4);
      iVar12 = (int)((ulonglong)uVar15 * 0x3e >> 0x20);
    }
    else {
      iVar12 = (int)((ulonglong)uVar15 * 0x3e >> 0x20);
    }
    uVar15 = 1;
    bVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789"[iVar12];
    if (0x7fffffff < (uint)(int)(char)bVar8) {
      local_70 = (CONCAT21(local_70._2_2_,bVar8) & 0xffffbf) << 8;
      bVar8 = bVar8 >> 6 | 0xc0;
      uVar15 = 2;
    }
    local_70 = CONCAT31(local_70._1_3_,bVar8);
    if ((uint)(local_48 - local_40) < uVar15) {
      FUN_006520b4(&local_48,local_40,uVar15,1,1);
      pcVar11 = local_44;
    }
    iVar7 = local_40;
    iVar16 = iVar16 + -1;
    FUN_01bed4e2((int)pcVar11 + local_40,&local_70,uVar15);
    pcVar6 = local_44;
    iVar12 = local_48;
    local_40 = iVar7 + uVar15;
  } while (iVar16 != 0);
  FUN_019a66e4(&local_8c,param_2,param_3,local_44,local_40);
  FUN_0134bd64(iVar12,pcVar6);
  local_6c = 0x180;
  local_70 = 0;
  local_59 = 0;
  local_68 = 0x101;
  uStack_63 = 1;
  FUN_019a581c(&local_50,&local_70,local_88,local_84);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_50 & 0xff) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  local_54 = local_4c;
  local_58 = 4;
  local_3c = &local_59;
  local_40 = local_84;
  local_44 = (char *)local_88;
  local_48 = local_8c;
  local_7c = FUN_019abeb4(&local_48);
  local_74 = CONCAT31(local_74._1_3_,local_59);
  local_80 = local_4c;
  *param_1 = local_4c;
  *(undefined8 *)(param_1 + 1) = local_7c;
  param_1[3] = local_74;
  if (!bVar5) {
    FUN_019bb7e0(local_c0,param_2);
  }
  return;
}

