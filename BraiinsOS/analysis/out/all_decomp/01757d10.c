// FUN_01757d10 @ 01757d10 size=692 calls_out=5 calls_in=16
// strings: 

undefined8 FUN_01757d10(uint param_1,int param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined8 uVar7;
  
  if (param_1 == 0 || param_2 == 0) {
    return 0;
  }
  *(uint *)(param_2 + 0xcc) = param_3;
  if (param_3 == 0) {
    return 1;
  }
  cVar6 = *(char *)(param_2 + 0x17d);
  if (cVar6 == '\x02') {
    return 0;
  }
  uVar5 = *(uint *)(param_2 + 0xd0);
  uVar3 = *(uint *)(param_2 + 200);
  if (cVar6 == '\0') {
    if (uVar3 != uVar5) {
      FUN_016dd606(param_2 + 0xd4 + uVar5,0);
    }
    *(undefined1 *)(param_2 + uVar5 + 0xd4) = *(undefined1 *)(param_2 + 0x17c);
    *(byte *)(param_2 + uVar3 + 0xd3) =
         ~((byte)~(byte)(((uint)*(byte *)(param_2 + uVar3 + 0xd3) << 0x19) >> 0x18) >> 1);
    iVar2 = FUN_01753f4c(param_2,param_2 + 0xd4,uVar3,uVar3);
    if (iVar2 != 0) {
      return 0;
    }
    cVar6 = *(char *)(param_2 + 0x17d);
    *(undefined4 *)(param_2 + 0xd0) = 0;
    uVar3 = *(uint *)(param_2 + 200);
LAB_01757e80:
    if (uVar3 < param_3) {
LAB_01757f04:
      uVar7 = FUN_0184606c(param_3,uVar3);
      param_3 = (uint)((ulonglong)uVar7 >> 0x20);
      uVar5 = uVar3 * (int)uVar7 + param_1;
      FUN_0175400c(param_2,param_1,uVar3 * (int)uVar7,uVar3,cVar6);
      *(undefined1 *)(param_2 + 0x17d) = 1;
      goto LAB_01757dcc;
    }
  }
  else {
    if (uVar5 == 0) goto LAB_01757e80;
    if (param_3 <= uVar5) {
      uVar3 = param_2 + 0xd4 + (uVar3 - uVar5);
      if (param_1 < uVar3) {
        if (param_1 + param_3 <= uVar3) goto LAB_01757f64;
      }
      else if ((param_1 <= uVar3) || (uVar3 + param_3 <= param_1)) {
LAB_01757f64:
        FUN_016dd1aa(param_1,uVar3,param_3);
        *(uint *)(param_2 + 0xd0) = *(int *)(param_2 + 0xd0) - param_3;
        return 1;
      }
      goto LAB_01757f90;
    }
    uVar4 = param_2 + 0xd4 + (uVar3 - uVar5);
    if (param_1 < uVar4) {
      if (uVar4 < param_1 + uVar5) goto LAB_01757f90;
    }
    else if ((uVar4 < param_1) && (param_1 < param_2 + 0xd4 + uVar3)) goto LAB_01757f90;
    FUN_016dd1aa(param_1,uVar4,uVar5);
    uVar3 = *(uint *)(param_2 + 200);
    param_3 = param_3 - *(int *)(param_2 + 0xd0);
    uVar5 = param_1 + *(int *)(param_2 + 0xd0);
    *(undefined4 *)(param_2 + 0xd0) = 0;
    if (uVar3 < param_3) {
      cVar6 = *(char *)(param_2 + 0x17d);
      param_1 = uVar5;
      goto LAB_01757f04;
    }
LAB_01757dcc:
    if (param_3 == 0) {
      return 1;
    }
    cVar6 = *(char *)(param_2 + 0x17d);
    uVar3 = *(uint *)(param_2 + 200);
    param_1 = uVar5;
  }
  uVar5 = param_2 + 0xd4;
  FUN_0175400c(param_2,uVar5,uVar3,uVar3,cVar6);
  if (param_1 < uVar5) {
    if (uVar5 < param_1 + param_3) goto LAB_01757f90;
  }
  else if ((uVar5 < param_1) && (param_1 < uVar5 + param_3)) {
LAB_01757f90:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1757f90);
    (*pcVar1)();
  }
  FUN_016dd1aa(param_1,uVar5,param_3);
  *(undefined1 *)(param_2 + 0x17d) = 1;
  *(uint *)(param_2 + 0xd0) = *(int *)(param_2 + 200) - param_3;
  return 1;
}

