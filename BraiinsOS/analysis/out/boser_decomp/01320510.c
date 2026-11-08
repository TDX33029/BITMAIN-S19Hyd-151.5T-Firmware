// FUN_01320510 @ 01320510 size=196 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_01320510(int param_1,int param_2,int param_3,byte *param_4,int param_5)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uVar8 = 0;
    uVar4 = 0;
  }
  else {
    iVar5 = 0;
    uVar8 = 0;
    uVar4 = 0;
    do {
      bVar2 = *(byte *)(param_1 + (uint)*(byte *)(param_2 - iVar5));
      uVar7 = (uint)bVar2;
      if (1 < uVar7) {
        param_3 = -iVar5;
        uVar1 = 1;
        goto LAB_013205cc;
      }
      uVar6 = iVar5 - 0x19;
      uVar3 = uVar7 << (iVar5 + 7U & 0xff);
      if (-1 < (int)uVar6) {
        uVar3 = 0;
      }
      uVar8 = uVar3 | uVar8;
      uVar3 = 0x19 - iVar5;
      iVar5 = iVar5 + -1;
      uVar3 = (uint)(bVar2 >> (uVar3 & 0xff));
      if (-1 < (int)uVar6) {
        uVar3 = uVar7 << (uVar6 & 0xff);
      }
      uVar4 = uVar3 | uVar4;
    } while (-iVar5 != param_3);
  }
  if (param_5 != 0) {
    uVar1 = 0;
    uVar7 = 0;
    do {
      uVar3 = uVar7 & 0x38;
      uVar7 = uVar7 + 0x38;
      bVar2 = (byte)(uVar8 >> uVar3) | (byte)(uVar4 << (0x20 - uVar3 & 0xff));
      if (-1 < (int)(uVar3 - 0x20)) {
        bVar2 = (byte)(uVar4 >> (uVar3 - 0x20 & 0xff));
      }
      param_5 = param_5 + -1;
      *param_4 = bVar2;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
LAB_013205cc:
  return CONCAT44(param_3,uVar1);
}

