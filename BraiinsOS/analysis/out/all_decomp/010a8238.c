// FUN_010a8238 @ 010a8238 size=628 calls_out=4 calls_in=3
// strings: 

void FUN_010a8238(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  uint local_34;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar5 = *(uint *)(param_1 + 0x24);
  uVar14 = 0;
  iVar6 = *(int *)(param_1 + 0x30);
  uVar8 = 0;
  uVar1 = *(uint *)(param_1 + 0x34);
  if (uVar3 == 0) {
    uVar14 = 2;
  }
  if (uVar14 == 2) goto LAB_010a82d0;
  while( true ) {
    if (uVar3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar8,uVar3,&DAT_018a65cc);
    }
    puVar7 = (uint *)(uVar8 * 0x34 + uVar5);
    if ((uVar14 & 1) == 0) goto LAB_010a82ec;
    if (uVar1 <= local_34) break;
    iVar4 = iVar6 + local_34 * 0x24;
    puVar12 = (uint *)(iVar4 + 0x10);
    bVar15 = *(int *)(iVar4 + 8) == 0;
    uVar2 = local_34;
    if (!bVar15) {
      uVar2 = *(uint *)(iVar4 + 0xc);
    }
    while( true ) {
      uVar14 = 2;
      if (!bVar15) {
        uVar14 = 1;
        local_34 = uVar2;
      }
      if (puVar7[8] == 0) {
        uVar16 = FUN_010a84b4((char)puVar7[9]);
      }
      else {
        uVar16 = *(undefined8 *)(puVar7 + 9);
      }
      uVar2 = (uint)((ulonglong)uVar16 >> 0x20);
      iVar11 = *param_2;
      iVar4 = param_2[2];
      if ((uint)(iVar11 - iVar4) < uVar2) {
        FUN_010bf6b0(param_2,iVar4,uVar2,1,1);
        iVar11 = *param_2;
        iVar4 = param_2[2];
      }
      iVar9 = param_2[1];
      FUN_016dd1aa(iVar9 + iVar4,(int)uVar16,uVar2);
      iVar4 = iVar4 + uVar2;
      param_2[2] = iVar4;
      if ((uint)(iVar11 - iVar4) < 2) {
        FUN_010bf6b0(param_2,iVar4,2,1,1);
        iVar11 = *param_2;
        iVar9 = param_2[1];
        iVar4 = param_2[2];
      }
      iVar10 = iVar4 + 2;
      param_2[2] = iVar10;
      *(undefined2 *)(iVar9 + iVar4) = 0x203a;
      uVar2 = puVar12[2];
      uVar13 = puVar12[1];
      if ((uint)(iVar11 - iVar10) < uVar2) {
        FUN_010bf6b0(param_2,iVar10,uVar2,1,1);
        iVar9 = param_2[1];
        iVar10 = param_2[2];
      }
      FUN_016dd1aa(iVar9 + iVar10,uVar13,uVar2);
      iVar10 = iVar10 + uVar2;
      param_2[2] = iVar10;
      if ((uint)(*param_2 - iVar10) < 2) {
        FUN_010bf6b0(param_2,iVar10,2,1,1);
        iVar10 = param_2[2];
      }
      param_2[2] = iVar10 + 2;
      *(undefined2 *)(param_2[1] + iVar10) = 0xa0d;
      if (uVar14 != 2) break;
LAB_010a82d0:
      uVar8 = uVar8 + 1;
      if (uVar3 <= uVar8) {
        return;
      }
      puVar7 = (uint *)(uVar8 * 0x34 + uVar5);
LAB_010a82ec:
      puVar12 = puVar7 + 3;
      bVar15 = (*puVar7 & 1) == 0;
      uVar2 = uVar5;
      if (!bVar15) {
        uVar2 = puVar7[1];
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(local_34,uVar1,&DAT_018a65dc);
}

