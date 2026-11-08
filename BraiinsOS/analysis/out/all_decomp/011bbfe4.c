// FUN_011bbfe4 @ 011bbfe4 size=256 calls_out=1 calls_in=1
// strings: 

void FUN_011bbfe4(int *param_1,int param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined1 local_29;
  undefined3 uStack_28;
  
  piVar12 = param_1 + 4;
  iVar11 = 0;
  do {
    bVar1 = *(byte *)(piVar12 + 1);
    iVar10 = *piVar12;
    iVar3 = FUN_011bc0ec(iVar10,(uint)bVar1,piVar12[-4],(char)piVar12[-3]);
    if (iVar3 != 0) {
      uVar4 = *(undefined4 *)((int)piVar12 + 5);
      uVar7 = *(undefined4 *)((int)piVar12 + 9);
      uStack_28 = (undefined3)((uint)piVar12[3] >> 8);
      iVar3 = iVar11;
      do {
        iVar5 = iVar3;
        puVar8 = (undefined4 *)((int)param_1 + iVar5);
        puVar8[4] = *puVar8;
        puVar8[5] = puVar8[1];
        puVar8[6] = puVar8[2];
        puVar8[7] = puVar8[3];
        if (iVar5 == 0) {
          piVar2 = param_1;
          goto LAB_011bc00c;
        }
        bVar9 = 0x50;
        bVar6 = 0x50;
        if (iVar10 == 0) {
          bVar9 = (&DAT_0042030e)[bVar1];
        }
        if (*(int *)((int)param_1 + iVar5 + -0x10) == 0) {
          bVar6 = (&DAT_00420338)[*(byte *)((int)param_1 + iVar5 + -0xc)];
        }
        iVar3 = iVar5 + -0x10;
      } while (bVar9 < bVar6);
      piVar2 = (int *)((int)param_1 + iVar5);
LAB_011bc00c:
      local_29 = (undefined1)((uint)uVar7 >> 0x18);
      *(undefined4 *)((int)piVar2 + 9) = uVar7;
      *(byte *)(piVar2 + 1) = bVar1;
      *piVar2 = iVar10;
      *(undefined4 *)((int)piVar2 + 5) = uVar4;
      piVar2[3] = CONCAT31(uStack_28,local_29);
    }
    piVar12 = piVar12 + 4;
    iVar11 = iVar11 + 0x10;
    if (piVar12 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

