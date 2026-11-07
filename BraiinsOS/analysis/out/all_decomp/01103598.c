// FUN_01103598 @ 01103598 size=248 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01103598(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint local_14;
  
  uVar1 = (undefined1)param_2;
  if (param_2 < 0x80) {
    local_14 = param_2 & 0xff;
    uVar5 = 1;
  }
  else {
    uVar2 = (undefined1)(param_2 >> 6);
    if (param_2 < 0x800) {
      local_14 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar5 = 2;
    }
    else {
      bVar3 = (byte)(param_2 >> 0xc);
      if (param_2 >> 0x10 == 0) {
        bVar4 = bVar3 | 0xe0;
        local_14._1_3_ = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) & 0xffff3f | 0x80;
        uVar5 = 3;
      }
      else {
        bVar4 = (byte)(param_2 >> 0x12) | 0xf0;
        uVar5 = 4;
        local_14._1_3_ = CONCAT21(CONCAT11(uVar1,uVar2),bVar3) & 0x3f3f3f | 0x808080;
      }
      local_14 = CONCAT31(local_14._1_3_,bVar4);
    }
  }
  piVar6 = *(int **)(param_1 + 8);
  iVar7 = piVar6[2];
  if ((uint)(*piVar6 - iVar7) < uVar5) {
    FUN_011096d4(piVar6,iVar7,uVar5,1,1);
    iVar7 = piVar6[2];
  }
  FUN_016dd1aa(piVar6[1] + iVar7,&local_14,uVar5);
  piVar6[2] = iVar7 + uVar5;
  return 0;
}

