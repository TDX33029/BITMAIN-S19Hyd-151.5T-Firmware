// FUN_005ec7c4 @ 005ec7c4 size=356 calls_out=3 calls_in=2
// strings: 

void FUN_005ec7c4(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_r1;
  undefined1 *puVar5;
  int iVar6;
  uint unaff_r8;
  bool bVar7;
  
  if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,*(uint *)(param_2 + 8),&DAT_01856a88);
  }
  piVar1 = (int *)(*(int *)(param_2 + 4) + param_3 * 0x14);
  if (piVar1[1] == 0) {
    if (*piVar1 == 0) {
      uVar4 = *(uint *)(param_2 + 0x14);
      iVar6 = 0;
      unaff_r8 = 0;
      do {
        uVar3 = uVar4;
        if (uVar3 == *(uint *)(param_2 + 0xc)) {
          FUN_005fd3dc(param_2 + 0xc);
        }
        iVar2 = *(int *)(param_2 + 0x10);
        uVar4 = uVar3 + 1;
        *(uint *)(param_2 + 0x14) = uVar4;
        puVar5 = (undefined1 *)(iVar2 + uVar3 * 9);
        *puVar5 = (char)iVar6;
        *(undefined4 *)(puVar5 + 5) = 0;
        *(undefined4 *)(puVar5 + 1) = param_4;
        if (unaff_r8 == 0) {
          if (*(uint *)(param_2 + 8) <= param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(param_3,*(uint *)(param_2 + 8),&DAT_01856a98);
          }
          *(uint *)(*(int *)(param_2 + 4) + param_3 * 0x14) = uVar3;
        }
        else {
          if (uVar3 < unaff_r8) goto LAB_005ec8f4;
          *(uint *)(iVar2 + unaff_r8 * 9 + 5) = uVar3;
        }
        bVar7 = iVar6 == 0xff;
        iVar6 = iVar6 + 1;
        unaff_r8 = uVar3;
        if (bVar7) {
          *param_1 = 3;
          return;
        }
      } while( true );
    }
  }
  else {
    piVar1 = (int *)FUN_005ff95c(piVar1 + 1,&DAT_0033d4f3,0x37,&DAT_01856ac8);
  }
  FUN_005ff95c(piVar1,&DAT_00566a10,0x41,&DAT_01856ab8);
  uVar4 = extraout_r1;
LAB_005ec8f4:
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(unaff_r8,uVar4,&DAT_01856aa8);
}

