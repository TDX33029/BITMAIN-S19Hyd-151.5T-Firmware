// FUN_010adf5c @ 010adf5c size=248 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_010adf5c(undefined4 *param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint local_14;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    uVar6 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_14 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar6 = 2;
    }
    else {
      bVar4 = (byte)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        bVar4 = bVar4 | 0xe0;
        local_14 = (uint)((CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) & 0xffff3f | 0x80) << 8;
        uVar6 = 3;
      }
      else {
        local_14._0_3_ = (uint3)(bVar4 & 0x3f | 0x80) << 8;
        uVar6 = 4;
        bVar4 = (byte)(param_2 >> 0x12) | 0xf0;
        uVar3 = CONCAT13(uVar1,(int3)local_14) & 0x3fffffff;
        local_14._0_2_ = (undefined2)uVar3;
        local_14 = CONCAT13((char)(uVar3 >> 0x18),CONCAT12(uVar2,(undefined2)local_14)) & 0xff3fffff
                   | 0x80800000;
      }
      local_14 = CONCAT31(local_14._1_3_,bVar4);
    }
  }
  piVar7 = (int *)*param_1;
  iVar5 = piVar7[2];
  if ((uint)(*piVar7 - iVar5) < uVar6) {
    FUN_010bf6b0(piVar7,iVar5,uVar6,1,1);
    iVar5 = piVar7[2];
  }
  FUN_016dd1aa(piVar7[1] + iVar5,&local_14,uVar6);
  piVar7[2] = piVar7[2] + uVar6;
  return 0;
}

