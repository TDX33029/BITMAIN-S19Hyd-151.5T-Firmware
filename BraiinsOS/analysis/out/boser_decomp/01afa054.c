// FUN_01afa054 @ 01afa054 size=436 calls_out=5 calls_in=1
// strings: 

void FUN_01afa054(undefined4 *param_1,int param_2,ushort param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint local_30;
  undefined4 local_2c;
  
  puVar2 = (uint *)(param_2 + 8);
  uVar7 = *puVar2;
  uVar6 = *(uint *)(param_2 + 4);
  uVar3 = uVar7;
  if ((uint)(uVar7 <= uVar6) <= (uint)-*(int *)(param_2 + 0xc)) {
    uVar3 = uVar6;
  }
  if (uVar6 == uVar3) {
    *puVar2 = uVar6;
    *(undefined4 *)(param_2 + 0xc) = 0;
    puVar5 = &DAT_01d30824;
    *param_1 = 1;
    param_1[1] = 0x80000001;
    param_1[2] = 2;
LAB_01afa1ac:
    param_1[3] = puVar5;
  }
  else {
    *puVar2 = uVar7 + 1;
    *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + (uint)(0xfffffffe < uVar7);
    FUN_01afa680(&local_30,param_2);
    uVar1 = local_2c;
    if (((char)local_30 == '\x04') || ((local_30 & 0xff) == 4)) {
      if (param_3 < 5) {
        puVar5 = (undefined *)0x20;
        *param_1 = 1;
        param_1[1] = 0x80000000;
        param_1[2] = &DAT_0056b428;
        goto LAB_01afa1ac;
      }
      FUN_018a7af8(&local_30,param_3 - 5);
      uVar8 = FUN_01608eec(&local_30);
      iVar4 = (int)((ulonglong)uVar8 >> 0x20);
      FUN_01afa738(&local_30,param_2,(int)uVar8,iVar4);
      if (((char)local_30 != '\x04') && ((local_30 & 0xff) != 4)) {
        *param_1 = 1;
        param_1[1] = 0x80000001;
        param_1[2] = local_30;
        param_1[3] = local_2c;
        if (iVar4 == 0) {
          return;
        }
        thunk_FUN_01be4678((int)uVar8);
        return;
      }
      *param_1 = 0;
      *(undefined8 *)(param_1 + 1) = uVar8;
    }
    else {
      *param_1 = 1;
      param_1[1] = 0x80000001;
      param_1[2] = local_30;
    }
    param_1[3] = uVar1;
  }
  return;
}

