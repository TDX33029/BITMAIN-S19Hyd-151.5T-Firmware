// FUN_01151b64 @ 01151b64 size=932 calls_out=3 calls_in=2
// strings: 

void FUN_01151b64(undefined4 *param_1,uint *param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint local_30;
  uint local_2c;
  
  if (param_4 == 0 && (0xff < param_3) <= param_4) {
    cVar1 = (char)param_3;
    if (-1 < cVar1) {
      FUN_01153008(&local_30,param_2,0,(int)cVar1);
      if (((char)local_30 == '\x04') || ((local_30 & 0xff) == 4)) {
        *(char *)((int)param_1 + 5) = cVar1;
        *(undefined1 *)(param_1 + 1) = 0;
        *param_1 = 2;
        return;
      }
      *param_1 = 0;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      return;
    }
    FUN_01153008(&local_30,param_2,0xcc);
    if ((char)local_30 != '\x04') {
      uVar6 = 0;
LAB_01151dd4:
      *param_1 = uVar6;
      param_1[1] = local_30;
      param_1[2] = local_2c;
      return;
    }
    uVar4 = *param_2;
    uVar2 = param_2[2];
    if (uVar4 == uVar2) {
      uVar4 = 8;
      if (8 < uVar2 * 2) {
        uVar4 = uVar2 << 1;
      }
      uVar6 = 1;
      FUN_01150958(&local_30,uVar2,param_2[1],uVar4,1,1);
      if (local_30 != 0) {
        local_2c = 0;
        local_30 = 0x2601;
        goto LAB_01151dd4;
      }
      uVar2 = param_2[2];
      *param_2 = uVar4;
      param_2[1] = local_2c;
      if (uVar4 != uVar2) goto LAB_01151d9c;
    }
    else if (uVar4 != uVar2) goto LAB_01151d9c;
    FUN_01150aa8(param_2,uVar4,1);
    uVar2 = param_2[2];
LAB_01151d9c:
    *(char *)(param_2[1] + uVar2) = cVar1;
    *(undefined1 *)(param_1 + 1) = 0xcc;
    uVar4 = param_2[2];
    *param_1 = 2;
    param_2[2] = uVar4 + 1;
    return;
  }
  if (param_4 == 0 && (0xffff < param_3) <= param_4) {
    FUN_01153008(&local_30,param_2,0xcd);
    if ((char)local_30 == '\x04') {
      uVar2 = *param_2;
      uVar4 = param_2[2];
      uVar3 = (ushort)(param_3 >> 8);
      if (1 < uVar2 - uVar4) {
        uVar3 = (ushort)((param_3 << 0x18) >> 0x10) | uVar3 & 0xff;
LAB_01151e34:
        uVar2 = param_2[1];
        *(undefined1 *)(param_1 + 1) = 0xcd;
        *param_1 = 2;
        *(ushort *)(uVar2 + uVar4) = uVar3;
        param_2[2] = param_2[2] + 2;
        return;
      }
      uVar6 = 1;
      uVar5 = 0;
      uVar7 = 0x2601;
      if (uVar4 < 0xfffffffe) {
        uVar8 = uVar4 + 2;
        if (uVar8 <= uVar2 * 2) {
          uVar8 = uVar2 << 1;
        }
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        FUN_01150958(&local_30,uVar2,param_2[1],uVar8,1,1);
        if (local_30 != 1) {
          uVar3 = (ushort)((param_3 << 0x18) >> 0x10) | uVar3 & 0xff;
          uVar4 = param_2[2];
          *param_2 = uVar8;
          param_2[1] = local_2c;
          if (uVar8 - uVar4 < 2) {
            FUN_01150aa8(param_2,uVar4,2);
            uVar4 = param_2[2];
          }
          goto LAB_01151e34;
        }
      }
      goto LAB_01151d58;
    }
  }
  else {
    FUN_01153008(&local_30,param_2,0xce);
    if ((char)local_30 == '\x04') {
      uVar2 = *param_2;
      uVar4 = param_2[2];
      if (3 < uVar2 - uVar4) {
        uVar2 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
                param_3 >> 0x18;
LAB_01151e68:
        *(uint *)(param_2[1] + uVar4) = uVar2;
        *(undefined1 *)(param_1 + 1) = 0xce;
        uVar4 = param_2[2];
        *param_1 = 2;
        param_2[2] = uVar4 + 4;
        return;
      }
      uVar5 = 0;
      uVar7 = 0x2601;
      uVar6 = 1;
      if (uVar4 < 0xfffffffc) {
        uVar8 = uVar4 + 4;
        if (uVar8 <= uVar2 * 2) {
          uVar8 = uVar2 << 1;
        }
        if (uVar8 < 9) {
          uVar8 = 8;
        }
        FUN_01150958(&local_30,uVar2,param_2[1],uVar8,1,1);
        if (local_30 != 1) {
          uVar2 = param_3 << 0x18 | (param_3 >> 8 & 0xff) << 0x10 | (param_3 >> 0x10 & 0xff) << 8 |
                  param_3 >> 0x18;
          uVar4 = param_2[2];
          *param_2 = uVar8;
          param_2[1] = local_2c;
          if (uVar8 - uVar4 < 4) {
            FUN_01150aa8(param_2,uVar4,4);
            uVar4 = param_2[2];
          }
          goto LAB_01151e68;
        }
      }
      goto LAB_01151d58;
    }
  }
  uVar6 = 0;
  uVar5 = local_2c;
  uVar7 = local_30;
LAB_01151d58:
  param_1[1] = uVar7;
  *param_1 = uVar6;
  param_1[2] = uVar5;
  return;
}

