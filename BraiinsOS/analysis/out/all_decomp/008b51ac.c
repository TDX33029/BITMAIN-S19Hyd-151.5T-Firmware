// FUN_008b51ac @ 008b51ac size=504 calls_out=4 calls_in=3
// strings: assertion failed: (*tail).value.is_none() | assertion failed: (*next).value.is_some()

void FUN_008b51ac(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar5;
  int iVar6;
  int unaff_r10;
  int unaff_r11;
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
    *param_1 = 2;
    return;
  }
  do {
    piVar2 = *(int **)(iVar5 + 0xc);
    piVar4 = (int *)piVar2[6];
    DataMemoryBarrier(0xb);
    if (piVar4 == (int *)0x0) {
      iVar6 = 3;
      DataMemoryBarrier(0xb);
      if (*(int **)(iVar5 + 8) == piVar2) {
        iVar6 = 2;
      }
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
    }
    else {
      *(int **)(iVar5 + 0xc) = piVar4;
      if (*piVar2 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*tail).value.is_none()",0x29,&DAT_018a4e90);
      }
      iVar6 = *piVar4;
      if (iVar6 == 2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464("assertion failed: (*next).value.is_some()",0x29,&DAT_018a4ea0);
      }
      *piVar4 = 2;
      unaff_r10 = piVar4[3];
      unaff_r5 = piVar4[4];
      unaff_r6 = piVar4[5];
      unaff_r4 = piVar4[1];
      unaff_r11 = piVar4[2];
      if (*piVar2 != 2) {
        piVar4 = (int *)piVar2[2];
      }
      if (*piVar2 != 2 && piVar4 != (int *)0x0) {
        thunk_FUN_016d3fb4(piVar2[3]);
      }
      thunk_FUN_016d3fb4(piVar2);
      iVar3 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar3 = 0;
      }
    }
    if (iVar3 != 2) {
      if ((iVar3 == 0) && (iVar6 != 2)) {
        if (*param_2 != 0) {
          piVar4 = (int *)(*param_2 + 0x10);
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = *piVar4 + -1;
          DataMemoryBarrier(0xb);
        }
        param_1[1] = unaff_r4;
        param_1[2] = unaff_r11;
        *param_1 = iVar6;
        param_1[3] = unaff_r10;
        param_1[4] = unaff_r5;
        param_1[5] = unaff_r6;
        return;
      }
      DataMemoryBarrier(0xb);
      if (*(int *)(*param_2 + 0x10) != 0) {
        *param_1 = 3;
        return;
      }
      piVar4 = (int *)*param_2;
      if (piVar4 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar1 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar1);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0089f224(*param_2);
        }
      }
      *param_1 = 2;
      *param_2 = 0;
      return;
    }
    FUN_016da3a8();
  } while( true );
}

