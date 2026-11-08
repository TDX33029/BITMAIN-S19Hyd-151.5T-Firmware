// FUN_0128b320 @ 0128b320 size=292 calls_out=0 calls_in=1
// strings: 

void FUN_0128b320(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6,
                 uint param_7)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 in_CY;
  bool bVar3;
  
  if ((param_4 & 1) == 0) {
    if ((param_6 & 1) == 0) goto LAB_0128b43c;
    param_6 = 1;
    if ((param_2 & 1) == 0) {
      if (param_7 < 100) {
        iVar2 = 0x76c;
        if (param_7 < 0x46) {
          iVar2 = 2000;
        }
        *param_1 = 1;
        param_1[1] = iVar2 + param_7;
        return;
      }
      goto LAB_0128b424;
    }
LAB_0128b39c:
    bVar3 = (param_6 & 1) != 0;
    if (bVar3) {
      in_CY = 0x62 < param_7;
    }
    if (!(bool)in_CY || (!bVar3 || param_7 == 99)) {
      if (((-1 < (int)param_3) && ((param_4 & 1) == 0 || param_5 == param_3 / 100)) &&
         ((param_6 & param_7 != param_3 % 100) != 1)) {
        param_2 = 1;
LAB_0128b43c:
        *param_1 = param_2;
        param_1[1] = param_3;
        return;
      }
LAB_0128b3e8:
      *param_1 = 2;
      uVar1 = 1;
      goto LAB_0128b430;
    }
  }
  else {
    if ((param_2 & 1) != 0) goto LAB_0128b39c;
    if ((param_6 & 1) == 0) {
      uVar1 = 2;
      *param_1 = 2;
      goto LAB_0128b430;
    }
    if (param_7 < 100) {
      if (-1 < (int)param_5) {
        iVar2 = (int)((longlong)(int)param_5 * 100);
        if (((int)((ulonglong)((longlong)(int)param_5 * 100) >> 0x20) == iVar2 >> 0x1f) &&
           (!SCARRY4(iVar2,param_7))) {
          *param_1 = 1;
          param_1[1] = iVar2 + param_7;
          return;
        }
        goto LAB_0128b424;
      }
      goto LAB_0128b3e8;
    }
  }
LAB_0128b424:
  *param_1 = 2;
  uVar1 = 0;
LAB_0128b430:
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}

