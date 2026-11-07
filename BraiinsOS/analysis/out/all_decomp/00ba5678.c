// FUN_00ba5678 @ 00ba5678 size=540 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00ba5678(int *param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  double dVar15;
  undefined8 uVar16;
  longlong lVar17;
  int *piVar18;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58 [2];
  undefined1 auStack_50 [16];
  
  iVar10 = *param_1;
  if (iVar10 == 5 && param_1[1] == 0) {
    iVar10 = 0x50;
    dVar15 = (double)VectorUnsignedToFloat(param_2[0x22],(byte)(in_fpscr >> 0x16) & 3);
    if ((*param_2 & 1) != 0) {
      iVar10 = 8;
    }
    return SUB84((*(double *)((int)param_2 + iVar10) / dVar15) / *(double *)(param_1 + 2),0);
  }
  uVar6 = param_2[0x20];
  if (uVar6 == 0) {
    local_5c = 0;
  }
  else {
    local_70 = param_2[0x21];
    local_5c = param_2[0x22];
    local_68 = 0;
    local_78 = 0;
    local_74 = uVar6;
    local_64 = uVar6;
    local_60 = local_70;
  }
  local_7c = (uint)(uVar6 != 0);
  piVar18 = param_1 + 2;
  local_6c = local_7c;
  uVar16 = FUN_00c38db8(&local_7c);
  while( true ) {
    iVar2 = (int)((ulonglong)uVar16 >> 0x20);
    if ((int)uVar16 == 0) {
      VectorUnsignedToFloat(param_2[0x22],(byte)(in_fpscr >> 0x16) & 3);
      FUN_00c6e930(param_2[0x22],local_58);
                    /* WARNING: Could not recover jumptable at 0x00ba5848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&LAB_00ba584c + *(int *)(&LAB_00ba584c + local_58[0] * 4)))
                        (param_1,&LAB_00ba584c,*(int *)(&LAB_00ba584c + local_58[0] * 4),auStack_50)
      ;
      return uVar4;
    }
    iVar13 = *(int *)(iVar2 + 0x70);
    if (iVar13 == 0) break;
    iVar2 = *(int *)(iVar2 + 0x6c);
    iVar12 = 0;
    lVar1 = 0;
    do {
      iVar3 = iVar2 + iVar12 * 0x18;
      iVar7 = *(int *)(iVar3 + 0x14);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_0034ae25,0x39,&DAT_0186aba8);
      }
      iVar9 = iVar7 << 2;
      iVar5 = 0;
      puVar8 = *(uint **)(iVar3 + 0x10);
      uVar6 = 0;
      do {
        if (*(uint *)(iVar3 + 8) <= *puVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0034ae41,0x13,&DAT_0186abb8,*(uint *)(iVar3 + 8),iVar10,param_2,piVar18)
          ;
        }
        uVar11 = *(uint *)(*(int *)(iVar3 + 4) + *puVar8 * 4);
        puVar8 = puVar8 + 1;
        bVar14 = CARRY4(uVar6,uVar11);
        uVar6 = uVar6 + uVar11;
        iVar5 = iVar5 + (uint)bVar14;
        iVar9 = iVar9 + -4;
      } while (iVar9 != 0);
      lVar17 = FUN_01846088(uVar6,iVar5,iVar7,0);
      lVar1 = lVar17 + lVar1;
      iVar12 = iVar12 + 1;
    } while (iVar12 != iVar13);
    uVar4 = FUN_01846088((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar13,0);
    VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
    uVar16 = FUN_00c38db8(uVar4,&local_7c);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac08);
}

