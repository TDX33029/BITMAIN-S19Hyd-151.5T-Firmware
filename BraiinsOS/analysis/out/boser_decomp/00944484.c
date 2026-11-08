// FUN_00944484 @ 00944484 size=260 calls_out=4 calls_in=6
// strings: Hash table capacity overflow

void FUN_00944484(uint *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  
  if (param_3 < 0xf) {
    uVar3 = (param_3 & 8) + 8;
    if (param_3 < 4) {
      uVar3 = 4;
    }
  }
  else {
    bVar7 = 0x1ffffffe < param_3;
    bVar6 = param_3 == 0x1fffffff;
    uVar3 = param_2;
    puVar1 = param_1;
    if (param_3 < 0x20000000) {
      iVar2 = (int)((ulonglong)(param_3 << 3) * 0x24924925 >> 0x20);
      puVar1 = (uint *)&DAT_ffffffff;
      uVar3 = LZCOUNT((iVar2 + (param_3 * 8 - iVar2 >> 1) >> 2) - 1);
      bVar7 = 0x3ffffffd < 0xffffffffU >> uVar3;
      bVar6 = 0xffffffffU >> uVar3 == 0x3ffffffe;
    }
    if (bVar7 && !bVar6) goto LAB_009444e0;
    uVar3 = ((uint)puVar1 >> (uVar3 & 0xff)) + 1;
  }
  uVar4 = uVar3 + 4;
  uVar5 = uVar4 + uVar3 * 4;
  if ((uVar4 <= uVar5) && (uVar5 < 0x7ffffffd)) {
    iVar2 = FUN_01298504(uVar5,4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,uVar5);
    }
    uVar5 = iVar2 + uVar3 * 4;
    FUN_01bed93e(uVar5,0xff,uVar4);
    uVar4 = uVar3 - 1;
    param_1[4] = uVar4;
    if (7 < uVar4) {
      uVar4 = (uVar3 & 0xfffffff8) - (uVar3 >> 3);
    }
    *param_1 = param_2;
    param_1[1] = 4;
    param_1[2] = 4;
    param_1[3] = uVar5;
    param_1[5] = uVar4;
    param_1[6] = 0;
    return;
  }
LAB_009444e0:
                    /* WARNING: Subroutine does not return */
  FUN_012fb100("Hash table capacity overflow",0x39,&DAT_01d30868);
}

