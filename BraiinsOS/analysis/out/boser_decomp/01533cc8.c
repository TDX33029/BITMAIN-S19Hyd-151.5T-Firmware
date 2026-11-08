// FUN_01533cc8 @ 01533cc8 size=456 calls_out=8 calls_in=2
// strings: 

int FUN_01533cc8(int *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [3];
  undefined4 uStack_9c;
  int *local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined4 local_88;
  uint local_80;
  int local_7c;
  undefined1 local_50;
  char *local_4c;
  undefined8 local_38;
  int *local_30;
  int local_2c;
  
  uVar12 = CONCAT44(local_ac,local_b0);
  iVar6 = 0;
  if (*param_2 == '\x03') {
    uVar3 = FUN_01282a50(*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
    uVar10 = param_1[2];
    iVar8 = param_1[3];
    if ((uint)(uVar10 <= uVar3) <= (uint)-iVar8) {
      piVar7 = (int *)*param_1;
      do {
        iVar6 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar6 + 1;
      if (iVar6 < 0) {
LAB_01533e7c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1533e7c);
        (*pcVar1)();
      }
      iVar6 = param_1[1];
      if (param_4 == 0) {
        local_a8[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_0154f894((undefined4 *)(param_4 + 0xc),param_4);
        }
        local_b8 = *(int **)(param_4 + 0xc);
        do {
          iVar4 = *local_b8;
          bVar2 = (bool)hasExclusiveAccess(local_b8);
        } while (!bVar2);
        *local_b8 = iVar4 + 1;
        if (iVar4 < 0) goto LAB_01533e7c;
        iVar4 = *param_1;
        uVar11 = param_1[1];
        local_b4 = *(undefined4 *)(param_4 + 0x10);
        uVar9 = (*(int **)(param_4 + 4))[1];
        uVar3 = 0;
        if (uVar9 <= uVar11) {
          iVar5 = thunk_FUN_01bed842(**(int **)(param_4 + 4) + 8,iVar4 + 8,uVar9);
          uVar3 = uVar9;
          if (iVar5 != 0) {
            uVar3 = 0;
          }
        }
        uVar12 = FUN_016bc0ec(iVar4 + 8 + uVar3,uVar11 - uVar3);
        local_bc = 3;
        local_a8[0] = 2;
      }
      local_38 = FUN_01531840(param_3);
      local_88 = 0x8000001f;
      local_50 = 6;
      uStack_9c = local_bc;
      local_98 = local_b8;
      uStack_94 = local_b4;
      local_80 = uVar10;
      local_7c = iVar8;
      local_4c = param_2;
      local_30 = piVar7;
      local_2c = iVar6;
      uStack_90 = uVar12;
      iVar6 = thunk_FUN_01be5118(0x80);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x80);
      }
      FUN_01bed4e2(iVar6,local_a8,0x80);
    }
  }
  return iVar6;
}

