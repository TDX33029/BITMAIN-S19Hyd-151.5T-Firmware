// FUN_0127b808 @ 0127b808 size=388 calls_out=0 calls_in=4
// strings: 

uint * FUN_0127b808(int param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  
  if (param_4 != 0) {
    return (uint *)0x0;
  }
  if ((param_6 == 0) && (param_3 <= param_5)) {
    uVar5 = param_2;
    if (param_5 <= param_2) {
      uVar5 = param_3;
    }
    if ((param_5 <= param_2 && param_3 <= param_5) && uVar5 != param_5) {
      uVar5 = param_5 - param_3;
      puVar1 = (uint *)(param_1 + param_3);
      puVar2 = puVar1;
      if (uVar5 < 4) {
        uVar3 = uVar5;
        do {
          if ((char)*puVar2 == '\0') {
LAB_0127b97c:
            if (uVar5 < (uint)((int)puVar2 - (int)puVar1)) {
              puVar1 = (uint *)0x0;
            }
            return puVar1;
          }
          puVar2 = (uint *)((int)puVar2 + 1);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      else if ((~(0x1010100 - *puVar1 | *puVar1) & 0x80808080) == 0) {
        puVar6 = (uint *)(param_1 + param_5);
        puVar2 = (uint *)(((uint)puVar1 & 0xfffffffc) + 4);
        if (uVar5 < 9) {
          if (puVar2 < puVar6) {
            iVar4 = ((((uint)puVar1 & 3) + param_5) - param_3) + -4;
            do {
              if ((char)*puVar2 == '\0') goto LAB_0127b97c;
              puVar2 = (uint *)((int)puVar2 + 1);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          for (; puVar2 <= puVar6 + -2; puVar2 = puVar2 + 2) {
            uVar3 = ~(0x1010100 - *puVar2 | *puVar2);
            bVar7 = (uVar3 & 0x80808080) == 0;
            if (bVar7) {
              uVar3 = ~(0x1010100 - puVar2[1] | puVar2[1]);
            }
            if (!bVar7 || (uVar3 & 0x80808080) != 0) break;
          }
          if (puVar2 < puVar6) {
            do {
              if ((char)*puVar2 == '\0') goto LAB_0127b97c;
              puVar2 = (uint *)((int)puVar2 + 1);
            } while (puVar2 != puVar6);
          }
        }
      }
      else {
        uVar3 = uVar5;
        do {
          if ((char)*puVar2 == '\0') goto LAB_0127b97c;
          puVar2 = (uint *)((int)puVar2 + 1);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
    }
  }
  return (uint *)0x0;
}

