// FUN_0122e3a0 @ 0122e3a0 size=396 calls_out=6 calls_in=2
// strings: 

undefined4 FUN_0122e3a0(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 local_4c [3];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  int local_28;
  
  if (*param_2 == '\x03') {
    local_2c = *(undefined4 *)(param_2 + 8);
    local_28 = *(int *)(param_2 + 0xc);
    FUN_00fb3f68(local_4c,&local_2c);
    if ((local_28 != 0) || (((byte)local_4c[0] & 1) == 0)) {
      piVar6 = (int *)*param_1;
      do {
        iVar3 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar3 + 1;
      if (iVar3 < 0) {
LAB_0122e528:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x122e528);
        (*pcVar1)();
      }
      uVar8 = param_1[1];
      if (param_4 == 0) {
        local_4c[0] = 0;
      }
      else {
        DataMemoryBarrier(0xb);
        if (*(int *)(param_4 + 0x14) != 0) {
          FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
        }
        piVar4 = *(int **)(param_4 + 0xc);
        do {
          iVar3 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar3 + 1;
        if (iVar3 < 0) goto LAB_0122e528;
        uVar5 = 0;
        uVar9 = *(undefined4 *)(param_4 + 0xc);
        uVar10 = *(undefined4 *)(param_4 + 0x10);
        uVar7 = (*(int **)(param_4 + 4))[1];
        if (uVar7 <= uVar8) {
          iVar3 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar6 + 2,uVar7);
          uVar5 = uVar7;
          if (iVar3 != 0) {
            uVar5 = 0;
          }
        }
        local_34 = FUN_011e1508((int)(piVar6 + 2) + uVar5,uVar8 - uVar5);
        local_40 = 3;
        local_4c[0] = 2;
        local_3c = uVar9;
        local_38 = uVar10;
      }
      uVar11 = FUN_01238114(param_3);
      uVar9 = FUN_011f18dc(piVar6,uVar8,local_4c,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20),
                           param_2,&DAT_00567270,4);
      return uVar9;
    }
  }
  return 0;
}

