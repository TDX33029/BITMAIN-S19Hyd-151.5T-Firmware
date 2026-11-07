// FUN_01629dac @ 01629dac size=632 calls_out=4 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x01629f10) */
/* WARNING: Removing unreachable block (ram,0x01629f18) */
/* WARNING: Removing unreachable block (ram,0x01629f74) */
/* WARNING: Removing unreachable block (ram,0x01629f24) */
/* WARNING: Removing unreachable block (ram,0x01629f30) */

undefined8 FUN_01629dac(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  
  FUN_00602b88(&local_120,param_1,param_2);
  puVar1 = local_11c;
  if (local_120 != -0x80000000) {
    if (local_120 != 0) {
      thunk_FUN_016d3fb4(local_11c);
    }
    return 0xffea00000001;
  }
  if (0xff < param_4) {
    uVar5 = FUN_0162a048(param_3,param_4,local_11c);
    goto LAB_01629fe0;
  }
  FUN_016dd1aa(&local_120,param_3,param_4);
  uVar2 = 0;
  *(undefined1 *)((int)&local_120 + param_4) = 0;
  if (param_4 < 7) {
    if ((char)local_120 == '\0') {
      uVar2 = 0;
LAB_01629fa8:
      if (uVar2 == param_4) {
        software_interrupt(0);
        uVar5 = 0xffffff9c00000001;
        goto LAB_01629fe0;
      }
    }
    else if (param_4 != 0) {
      if (local_120._1_1_ == '\0') {
        uVar2 = 1;
        goto LAB_01629fa8;
      }
      if (param_4 != 1) {
        if (local_120._2_1_ == '\0') {
          uVar2 = 2;
          goto LAB_01629fa8;
        }
        if (param_4 != 2) {
          if (local_120._3_1_ == '\0') {
            uVar2 = 3;
            goto LAB_01629fa8;
          }
          if (param_4 != 3) {
            if ((char)local_11c == '\0') {
              uVar2 = 4;
              goto LAB_01629fa8;
            }
            if (param_4 != 4) {
              if (local_11c._1_1_ == '\0') {
                uVar2 = 5;
                goto LAB_01629fa8;
              }
              if (param_4 != 5) {
                uVar2 = 6;
                if (local_11c._2_1_ == '\0') goto LAB_01629fa8;
              }
            }
          }
        }
      }
    }
  }
  else {
    do {
      uVar4 = *(uint *)((int)&local_120 + uVar2);
      if (((0x1010100 - uVar4 | uVar4) & 0x80808080 &
          (0x1010100 - *(uint *)((int)&local_11c + uVar2) | *(uint *)((int)&local_11c + uVar2))) !=
          0x80808080) break;
      uVar2 = uVar2 + 8;
    } while (uVar2 <= param_4 - 7);
    if (param_4 + 1 != uVar2) {
      iVar3 = 0;
      do {
        if (*(char *)((int)&local_120 + iVar3 + uVar2) == '\0') {
          uVar2 = iVar3 + uVar2;
          goto LAB_01629fa8;
        }
        iVar3 = iVar3 + 1;
      } while ((param_4 + 1) - uVar2 != iVar3);
    }
  }
  uVar5 = 0xffea00000001;
LAB_01629fe0:
  *puVar1 = 0;
  if (local_118 != 0) {
    thunk_FUN_016d3fb4(puVar1,(int)((ulonglong)uVar5 >> 0x20));
  }
  return uVar5;
}

