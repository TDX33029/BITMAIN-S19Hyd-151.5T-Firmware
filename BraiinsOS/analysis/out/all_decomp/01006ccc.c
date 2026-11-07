// FUN_01006ccc @ 01006ccc size=164 calls_out=3 calls_in=2
// strings: 

void FUN_01006ccc(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_2 + 0x10);
  uVar3 = *(uint *)(param_2 + 0x18);
  if (uVar3 < uVar6) {
    iVar4 = *(int *)(param_2 + 0xc);
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    do {
      while (iVar2 = FUN_016e034e(uVar5,iVar4 + uVar3,uVar6 - uVar3), iVar2 != -1) {
        if (iVar2 == 0) {
          FUN_015e79d4(param_1,0x17,&DAT_0037804d,0x24);
          return;
        }
        uVar3 = uVar3 + iVar2;
        *(uint *)(param_2 + 0x18) = uVar3;
        if (uVar6 <= uVar3) goto LAB_01006d3c;
      }
      piVar1 = (int *)FUN_016d2bc8();
      iVar2 = *piVar1;
      if (iVar2 != 4) {
        *param_1 = 0;
        param_1[1] = iVar2;
        return;
      }
    } while (uVar3 < uVar6);
  }
LAB_01006d3c:
  *(undefined1 *)param_1 = 4;
  return;
}

