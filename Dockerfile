FROM alpine

RUN apk add gcc make git linux-headers musl-dev

WORKDIR /danger

COPY ./src .

RUN make

CMD ./O-n^2-Adder, 100000, 10000