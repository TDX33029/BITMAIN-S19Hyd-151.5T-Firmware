// FUN_00096a9c @ 00096a9c  size=796  callers=1
// program: bmminer


undefined4 FUN_00096a9c(int *param_1,char *param_2,__gnuc_va_list param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  size_t __maxlen;
  int iVar5;
  int iVar6;
  
  if (*param_1 == 0) {
    FUN_00095b4c(2,"src/buf.c",0xd6,"pre-use of zlog_buf_resize fail, so can\'t convert");
    uVar4 = 0xffffffff;
  }
  else {
    __maxlen = param_1[3] - param_1[1];
    uVar1 = vsnprintf((char *)param_1[1],__maxlen,param_2,param_3);
    if (((int)uVar1 < 0) || (__maxlen <= uVar1)) {
      if ((int)uVar1 < 0) {
        piVar2 = __errno_location();
        FUN_00095b4c(2,"src/buf.c",0xe2,"vsnprintf fail, errno[%d]",*piVar2);
        FUN_00095b4c(2,"src/buf.c",0xe3,"nwrite[%d], size_left[%ld], format[%s]",uVar1,__maxlen,
                     param_2);
        uVar4 = 0xffffffff;
      }
      else if (uVar1 < __maxlen) {
        uVar4 = 0;
      }
      else {
        iVar3 = FUN_00096854(param_1,(uVar1 - __maxlen) + 1);
        if (iVar3 < 1) {
          if (iVar3 < 0) {
            FUN_00095b4c(2,"src/buf.c",0xf3,"zlog_buf_resize fail");
            uVar4 = 0xffffffff;
          }
          else {
            iVar5 = param_1[3];
            iVar6 = param_1[1];
            iVar3 = vsnprintf((char *)param_1[1],iVar5 - iVar6,param_2,param_3);
            if (iVar3 < 0) {
              piVar2 = __errno_location();
              FUN_00095b4c(2,"src/buf.c",0xfc,"vsnprintf fail, errno[%d]",*piVar2);
              FUN_00095b4c(2,"src/buf.c",0xfd,"nwrite[%d], size_left[%ld], format[%s]",iVar3,
                           iVar5 - iVar6,param_2);
              uVar4 = 0xffffffff;
            }
            else {
              param_1[1] = param_1[1] + iVar3;
              uVar4 = 0;
            }
          }
        }
        else {
          FUN_00095b4c(2,"src/buf.c",0xea,"conf limit to %ld, can\'t extend, so truncate",param_1[5]
                      );
          iVar3 = param_1[3];
          iVar5 = param_1[1];
          vsnprintf((char *)param_1[1],iVar3 - iVar5,param_2,param_3);
          param_1[1] = param_1[1] + ((iVar3 - iVar5) - 1U);
          FUN_000967b4(param_1);
          uVar4 = 1;
        }
      }
    }
    else {
      param_1[1] = param_1[1] + uVar1;
      uVar4 = 0;
    }
  }
  return uVar4;
}

