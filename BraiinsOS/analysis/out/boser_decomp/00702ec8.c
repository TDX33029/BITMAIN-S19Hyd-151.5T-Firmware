// FUN_00702ec8 @ 00702ec8 size=244 calls_out=4 calls_in=1
// strings: Hash table capacity overflow

void FUN_00702ec8(int *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_2 < 0xf) {
    uVar5 = (param_2 & 8) + 8;
    if (param_2 < 4) {
      uVar5 = 4;
    }
  }
  else {
    bVar7 = 0x1ffffffe < param_2;
    bVar6 = param_2 == 0x1fffffff;
    piVar1 = param_1;
    if (param_2 < 0x20000000) {
      iVar2 = (int)((ulonglong)(param_2 << 3) * 0x24924925 >> 0x20);
      piVar1 = (int *)&DAT_ffffffff;
      param_2 = LZCOUNT((iVar2 + (param_2 * 8 - iVar2 >> 1) >> 2) - 1);
      bVar7 = 0x3ffffffd < 0xffffffffU >> param_2;
      bVar6 = 0xffffffffU >> param_2 == 0x3ffffffe;
    }
    if (bVar7 && !bVar6) goto LAB_00702f20;
    uVar5 = ((uint)piVar1 >> (param_2 & 0xff)) + 1;
  }
  uVar3 = uVar5 + 4;
  uVar4 = uVar3 + uVar5 * 4;
  if ((uVar3 <= uVar4) && (uVar4 < 0x7ffffffd)) {
    iVar2 = FUN_01298504(uVar4,4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,uVar4);
    }
    iVar2 = iVar2 + uVar5 * 4;
    FUN_01bed93e(iVar2,0xff,uVar3);
    uVar3 = uVar5 - 1;
    param_1[1] = uVar3;
    if (7 < uVar3) {
      uVar3 = (uVar5 & 0xfffffff8) - (uVar5 >> 3);
    }
    *param_1 = iVar2;
    param_1[2] = uVar3;
    param_1[3] = 0;
    return;
  }
LAB_00702f20:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
}

