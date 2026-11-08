// FUN_01447554 @ 01447554 size=196 calls_out=1 calls_in=2
// strings: 

void FUN_01447554(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar1 = *param_1;
  if (uVar1 < 0xff000000) {
    return;
  }
  puVar4 = (undefined1 *)(uVar1 & 0xffffff);
  puVar2 = (undefined1 *)0xffff;
  if ((char)param_2[0xb] != '\0') {
    puVar2 = (undefined1 *)0xfff;
  }
  if (puVar2 < puVar4) {
    if (puVar4 < &DAT_00110000) {
      if (puVar4 < (undefined1 *)param_2[7]) {
        uVar1 = FUN_01449040(param_2,puVar4);
      }
      else {
        uVar1 = param_2[5] - 2;
      }
      goto LAB_014475dc;
    }
  }
  else if ((uint)puVar4 >> 6 < param_2[2]) {
    uVar1 = (uVar1 & 0x3f) + (uint)*(ushort *)(param_2[1] + ((uint)puVar4 >> 6) * 2);
    goto LAB_014475dc;
  }
  uVar1 = param_2[5] - 1;
LAB_014475dc:
  uVar3 = *param_2;
  if (uVar1 < param_2[5]) {
    uVar3 = *(uint *)(param_2[4] + uVar1 * 4);
  }
  if ((uVar3 & 0xffffff00) == 0xd800) {
    puVar4 = (undefined1 *)((uint)puVar4 | uVar3 << 0x18);
  }
  *param_1 = (uint)puVar4;
  return;
}

