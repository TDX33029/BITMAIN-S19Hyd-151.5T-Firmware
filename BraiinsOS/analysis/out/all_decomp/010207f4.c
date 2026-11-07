// FUN_010207f4 @ 010207f4 size=260 calls_out=2 calls_in=1
// strings: 

void FUN_010207f4(undefined4 *param_1,int param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_20;
  uint local_1c;
  
  uVar4 = (uint)DAT_018dd947;
  piVar5 = (int *)*param_1;
  uVar1 = *(undefined2 *)(&DAT_0041f518 + param_2 * 2);
  iVar2 = piVar5[1];
  if ((uint)(piVar5[2] - iVar2) < 2) {
    FUN_00f5f538(piVar5,2,uVar4);
    iVar2 = piVar5[1];
    uVar4 = piVar5[2];
    *(undefined2 *)(*piVar5 + iVar2) = uVar1;
    local_1c = uVar4 - iVar2;
    if (local_1c < 2) {
      local_20 = 2;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_20);
    }
  }
  else {
    *(undefined2 *)(*piVar5 + iVar2) = uVar1;
  }
  iVar3 = iVar2 + 2;
  uVar6 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
          param_3 >> 0x18;
  piVar5[1] = iVar3;
  if (3 < (uint)(piVar5[2] - iVar3)) {
    *(uint *)(*piVar5 + iVar3) = uVar6;
    piVar5[1] = iVar2 + 6;
    return;
  }
  FUN_00f5f538(piVar5,4,uVar4);
  iVar2 = piVar5[1];
  iVar3 = piVar5[2];
  *(uint *)(*piVar5 + iVar2) = uVar6;
  local_1c = iVar3 - iVar2;
  if (local_1c < 4) {
    local_20 = 4;
                    /* WARNING: Subroutine does not return */
    FUN_00f600c0(&local_20);
  }
  piVar5[1] = iVar2 + 4;
  return;
}

