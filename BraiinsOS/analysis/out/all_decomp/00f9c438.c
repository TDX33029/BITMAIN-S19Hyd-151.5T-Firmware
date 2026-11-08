// FUN_00f9c438 @ 00f9c438 size=344 calls_out=4 calls_in=2
// strings: 

bool FUN_00f9c438(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar6 = *(int *)(param_1 + 0x24);
  uVar7 = *(uint *)(param_1 + 0x28);
  iVar5 = uVar7 << 3;
  uVar3 = 0;
  do {
    if (iVar5 == 0) {
LAB_00f9c554:
      return iVar5 != 0;
    }
    iVar4 = iVar6 + uVar3 * 8;
    if ((*(int *)(iVar4 + 4) == param_3) &&
       (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar6 + uVar3 * 8),param_2,param_3), iVar1 == 0))
    {
      if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00602938(uVar3,uVar7,&DAT_01880804);
      }
      FUN_016dd52c(iVar4,iVar4 + 8,(uVar7 + ~uVar3) * 8);
      uVar8 = *(uint *)(param_1 + 0x34);
      *(uint *)(param_1 + 0x28) = uVar7 - 1;
      if (uVar3 < uVar8) {
        piVar2 = (int *)(*(int *)(param_1 + 0x30) + uVar3 * 0x3c);
        iVar6 = *piVar2;
        FUN_016dd52c(piVar2,piVar2 + 0xf,(uVar8 + ~uVar3) * 0x3c);
        uVar8 = uVar8 - 1;
        *(uint *)(param_1 + 0x34) = uVar8;
        if (iVar6 != 2) {
          FUN_00f9b780();
          goto LAB_00f9c554;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00602938(uVar3,uVar8,&DAT_01880814);
    }
    iVar5 = iVar5 + -8;
    uVar3 = uVar3 + 1;
  } while( true );
}

