// FUN_0134bfa8 @ 0134bfa8 size=172 calls_out=0 calls_in=6
// strings: 

uint * FUN_0134bfa8(uint *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  do {
    uVar5 = 0xffffffff;
    iVar1 = (uint)*(ushort *)((int)param_1 + 0x4d6) << 3;
    puVar2 = param_1;
    do {
      if (iVar1 == 0) {
        uVar5 = (uint)*(ushort *)((int)param_1 + 0x4d6);
        goto LAB_0134c024;
      }
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      iVar1 = iVar1 + -8;
      uVar5 = uVar5 + 1;
      puVar2 = puVar2 + 2;
      uVar3 = (uint)(uVar4 <= param_4 && (uint)(param_3 <= uVar3) <= uVar4 - param_4) -
              (uint)(param_4 <= uVar4 && (uint)(uVar3 <= param_3) <= param_4 - uVar4);
    } while (uVar3 == 1);
    if ((uVar3 & 0xff) == 0) {
      return param_1 + uVar5 * 0x1a + 0x16;
    }
LAB_0134c024:
    if (param_2 == 0) {
      return (uint *)0x0;
    }
    param_2 = param_2 + -1;
    param_1 = (uint *)param_1[uVar5 + 0x136];
  } while( true );
}

