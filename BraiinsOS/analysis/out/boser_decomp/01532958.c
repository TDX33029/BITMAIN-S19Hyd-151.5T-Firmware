// FUN_01532958 @ 01532958 size=492 calls_out=11 calls_in=0
// strings: 

undefined4
FUN_01532958(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_5c [3];
  undefined4 local_50;
  int *local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = FUN_01577618(param_1,param_2,param_5);
  if (iVar3 == 0) {
    piVar9 = *(int **)(param_1 + 0x14);
    do {
      iVar3 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar3 + 1;
    if (iVar3 < 0) {
LAB_01532b30:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1532b30);
      (*pcVar1)();
    }
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    if (param_4 == 0) {
      local_5c[0] = 0;
    }
    else {
      DataMemoryBarrier(0xb);
      if (*(int *)(param_4 + 0x14) != 0) {
        FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
      }
      piVar10 = *(int **)(param_4 + 0xc);
      do {
        iVar3 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar3 + 1;
      if (iVar3 < 0) goto LAB_01532b30;
      uVar12 = *(uint *)(param_1 + 0x18);
      uVar11 = (*(int **)(param_4 + 4))[1];
      iVar3 = *(int *)(param_1 + 0x14) + 8;
      uVar7 = *(undefined4 *)(param_4 + 0x10);
      uVar8 = 0;
      if (uVar11 <= uVar12) {
        iVar5 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar3,uVar11);
        uVar8 = uVar11;
        if (iVar5 != 0) {
          uVar8 = 0;
        }
      }
      local_44 = FUN_016bc0ec(iVar3 + uVar8,uVar12 - uVar8);
      local_50 = 3;
      local_5c[0] = 2;
      local_4c = piVar10;
      local_48 = uVar7;
    }
    uVar13 = FUN_01531840(param_3);
    puVar6 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    uVar14 = FUN_01576990(param_1,param_2,param_3,param_4,param_5);
    FUN_014ff278(&local_30,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
    *puVar6 = local_30;
    puVar6[1] = uStack_2c;
    puVar6[2] = uStack_28;
    local_34 = 1;
    local_3c = 1;
    local_38 = puVar6;
    FUN_01595c64(piVar9,uVar4,local_5c,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),param_2,
                 &local_3c);
    uVar4 = FUN_01596948();
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

