// FUN_01be2b70 @ 01be2b70 size=294 calls_out=6 calls_in=6
// strings: 

uint FUN_01be2b70(uint param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint local_148;
  uint auStack_144 [3];
  uint local_138;
  int local_134;
  int local_12c;
  uint local_114;
  
  if (param_1 < 0xfb) {
    uVar5 = (uint)*(short *)(&DAT_00564b10 + param_1 * 2);
    if (uVar5 == 0) goto LAB_01be2bac;
    if (-2 < (int)uVar5) {
LAB_01be2ca0:
      return uVar5;
    }
    if ((int)uVar5 < -0x100) {
      FUN_01be6608(uVar5 & 0x3fff,&local_148);
      if (auStack_144[0] == 0xffffffff && local_148 == 0xffffffff) {
        return 0xffffffff;
      }
      if (auStack_144[0] == 0 && (0x7fffffff < local_148) <= auStack_144[0]) {
        return local_148;
      }
      goto switchD_01be2b9a_caseD_5;
    }
    switch((char)*(short *)(&DAT_00564b10 + param_1 * 2)) {
    case '\x01':
      uVar3 = 0x31069;
      break;
    case '\x02':
      uVar3 = 0x20000;
      break;
    case '\x03':
      uVar3 = 0x8000;
      break;
    case '\x04':
      uVar3 = DAT_01d5358c;
      break;
    case '\x06':
    case '\a':
      local_148 = 1;
      FUN_01bed93e(auStack_144,0,0x7c);
      software_interrupt(0);
      iVar4 = 0;
      uVar3 = 0;
      do {
        while( true ) {
          bVar1 = *(byte *)((int)auStack_144 + iVar4 + -4);
          if (bVar1 == 0) break;
          uVar3 = uVar3 + 1;
          *(byte *)((int)auStack_144 + iVar4 + -4) = bVar1 - 1 & bVar1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 != 0x80);
      break;
    case '\b':
    case '\t':
      FUN_01be3f68(&local_148);
      if (local_114 == 0) {
        local_114 = 1;
      }
      if (param_1 != 0x55) {
        local_138 = local_134 + local_12c;
      }
      uVar6 = FUN_01bf0ff0((int)((ulonglong)local_138 * (ulonglong)local_114),
                           (int)((ulonglong)local_138 * (ulonglong)local_114 >> 0x20),DAT_01d5358c,0
                          );
      uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
      if (uVar5 == 0 && (0x7fffffff < (uint)uVar6) <= uVar5) {
        return (uint)uVar6;
      }
    case '\x05':
    case '\v':
switchD_01be2b9a_caseD_5:
      uVar3 = 0x7fffffff;
      break;
    case '\n':
      uVar3 = 0;
      break;
    case '\f':
    case '\r':
      uVar3 = FUN_01be65d0(0x33);
      if ((int)uVar3 < 0x800) {
        uVar3 = 0x800;
      }
      if (uVar5 == 0xffffff0d) {
        uVar3 = uVar3 + 0x1800;
      }
      break;
    default:
      goto LAB_01be2ca0;
    }
  }
  else {
LAB_01be2bac:
    puVar2 = (undefined4 *)FUN_01be3244();
    *puVar2 = 0x16;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

