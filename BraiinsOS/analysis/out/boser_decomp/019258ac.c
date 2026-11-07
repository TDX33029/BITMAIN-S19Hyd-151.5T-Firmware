// FUN_019258ac @ 019258ac size=216 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_019258ac(int param_1,int param_2,int param_3,int param_4,ushort *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if (param_4 != 0) {
    iVar5 = param_3 + param_4 * 0x14;
    do {
      uVar6 = FUN_018eb4c8(param_3);
      uVar1 = (uint)((ulonglong)uVar6 >> 0x20);
      if (param_2 != 0) {
        iVar2 = param_2 << 2;
        puVar3 = (ushort *)(param_1 + 2);
        do {
          uVar4 = (uint)uVar6 & 0xffff;
          if ((puVar3[-1] == uVar4) && ((uVar4 != 0x2a || ((uint)*puVar3 == (uVar1 & 0xffff)))))
          goto LAB_0192595c;
          puVar3 = puVar3 + 2;
          iVar2 = iVar2 + -4;
        } while (iVar2 != 0);
      }
      if (param_6 == 0) {
        return 1;
      }
      uVar4 = (uint)uVar6 & 0xffff;
      if (*param_5 != uVar4) {
        return 1;
      }
      if ((uVar4 == 0x2a) && ((uint)param_5[1] != (uVar1 & 0xffff))) {
        return 1;
      }
LAB_0192595c:
      param_3 = param_3 + 0x14;
    } while (param_3 != iVar5);
  }
  return 0;
}

