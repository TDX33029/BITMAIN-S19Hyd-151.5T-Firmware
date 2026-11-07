// FUN_009d7a90 @ 009d7a90 size=556 calls_out=6 calls_in=0
// strings: 

undefined4 FUN_009d7a90(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int **ppiVar5;
  int **ppiVar6;
  int ***pppiVar7;
  uint in_fpscr;
  int **local_68;
  int *local_64;
  int **local_60;
  float **local_58;
  int *local_54;
  int iStack_50;
  int ***local_48;
  undefined4 *local_44;
  int iStack_40;
  float local_38;
  float local_34;
  
  ppiVar6 = *(int ***)(param_1 + 8);
  iVar1 = (int)ppiVar6 * 0xc;
  if ((int **)0xaaaaaaa < ppiVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  iVar4 = *(int *)(param_1 + 4);
  ppiVar5 = (int **)0x0;
  if (iVar1 == 0) {
    local_54 = (int *)&DAT_00000004;
    local_58 = (float **)0x0;
    piVar2 = local_54;
  }
  else {
    piVar2 = (int *)thunk_FUN_016d4a50(iVar1);
    local_58 = (float **)ppiVar6;
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar1);
    }
  }
  local_54 = piVar2;
  if (ppiVar6 != (int **)0x0) {
    ppiVar5 = (int **)0x0;
    do {
      local_38 = *(float *)(iVar4 + (int)ppiVar5 * 4);
      if ((uint)local_38 >> 3 < 0x7d) {
        local_64 = (int *)&LAB_00fac484;
        local_68 = (int **)&local_38;
        FUN_00600d2c(&local_48,&DAT_00590e71,&local_68);
      }
      else {
        local_34 = (float)VectorUnsignedToFloat(local_38,(byte)(in_fpscr >> 0x16) & 3);
        local_34 = local_34 / 1000.0;
        local_64 = (int *)&LAB_00fb1efc;
        local_68 = (int **)&local_34;
        FUN_00600d2c(&local_48,&DAT_0034ae08,&local_68);
      }
      ppiVar5 = (int **)((int)ppiVar5 + 1);
      *piVar2 = (int)local_48;
      piVar2[1] = (int)local_44;
      piVar2[2] = iStack_40;
      piVar2 = piVar2 + 3;
    } while (ppiVar6 != ppiVar5);
    ppiVar5 = ppiVar6;
  }
  piVar2 = local_54;
  local_68 = (int **)local_58;
  local_64 = local_54;
  local_60 = ppiVar5;
  FUN_009d39b4(&local_48,local_54,ppiVar5,&DAT_0041545b);
  pppiVar7 = (int ***)&local_58;
  local_58 = (float **)local_48;
  local_54 = local_44;
  iStack_50 = iStack_40;
  local_44 = &DAT_006043a8;
  local_48 = pppiVar7;
  uVar3 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_48);
  ppiVar6 = (int **)0x0;
  if (local_58 != (float **)0x0) goto LAB_009d7cbc;
  do {
    pppiVar7 = (int ***)(piVar2 + (int)ppiVar6 * 3 + -3);
    do {
      if (ppiVar5 == ppiVar6) {
        if (local_68 != (int **)0x0) {
          thunk_FUN_016d3fb4(piVar2);
        }
        return uVar3;
      }
      pppiVar7 = pppiVar7 + 3;
      ppiVar6 = (int **)((int)ppiVar6 + 1);
    } while (*pppiVar7 == (int **)0x0);
LAB_009d7cbc:
    thunk_FUN_016d3fb4(pppiVar7[1]);
  } while( true );
}

